#include <iostream>
#include <string.h>
#include <time.h>
using namespace std;

//빙고게임
//포인터 2중배열
//난이도 급상승

int input = 0;

//빙고생성함수
void Create(int**& ppBingo) //int**&  변수 call by reference, 포인터는 p
{
	//포인터의 경우(4byte)
	//ppBingo = ComBingo, ppBingo = MyBingo

	//레퍼런스 자료형일 경우(x)
	//ComBingo 의별명이 ppBingo

	//2중포인터 배열 선언및 초기화
	ppBingo = new int* [input];
	for (int i = 0; i < input; i++)
	{
		ppBingo[i] = new int[input];
		for (int j = 0; j < input; j++)
		{
			ppBingo[i][j] = i * input + j;
		}
	}
}

//빙고 셔플함수
void BingoShuffle(int**& ppBingo)
{
	//셔플
	for (int i = 0; i < 1000; i++)
	{
		int dest = rand() % input;
		int sour = rand() % input;
		int dest2 = rand() % input;
		int sour2 = rand() % input;

		int temp = ppBingo[dest][dest2];
		ppBingo[dest][dest2] = ppBingo[sour][sour2];
		ppBingo[sour][sour2] = temp;
	}
}

//빙고체크함수
int BingoCheck(int**& ppBingo, int Check)
{
	int Count = 0; //지역변수
	for (int i = 0; i < input; i++)
	{
		for (int j = 0; j < input; j++)
		{
			if (Check == ppBingo[i][j])
			{
				//가지고있는 수를 다른수로 치환
				ppBingo[i][j] = -1;
				//여기서 리턴이면 input*input보다 작다
				return Count;
			}
			Count++;
		}
	}
	//포문을 탈출 했을때(찾는값이 없을때) 
	//카운트값은 input*input;
	return Count;
}

//범위형 랜덤값 반환 함수

//정수형         3 ,     5
int RndInt(int start, int end)
{
	return rand() % (end - start + 1) + start;
}

int main()
{
	srand(time(NULL));

	//빙고칸
	int** MyBingo = nullptr;
	int** ComBingo = nullptr;

	//숫자입력
	int inputNum = 0, comNum = 0;

	//빙고를 세어줄 변수
	int MyBingoCount, ComBingoCount;
	MyBingoCount = ComBingoCount = 0;

	cout << "빙고게임! 원하는 빙고칸 사이즈를 입력해주세요" << endl;
	cout << "4 -> 4x4, 5-> 5x5" << endl;

	cin >> input;

	Create(MyBingo);
	Create(ComBingo);
	//빙고판 완성
	//셔플
	BingoShuffle(MyBingo);
	BingoShuffle(ComBingo);

	//반복
	while (1)
	{
		//출력
		cout << "내 빙고:" << MyBingoCount << endl;
		cout << "Com 빙고:" << ComBingoCount << endl;
		//빙고판 출력
		//포문두개
		for (int i = 0; i < input; i++)
		{
			for (int j = 0; j < input; j++)
			{
				cout << MyBingo[i][j] << "\t";
			}
			cout << endl;
		}
		cout << "===============================" << endl;
		for (int i = 0; i < input; i++)
		{
			for (int j = 0; j < input; j++)
			{
				cout << ComBingo[i][j] << "\t";
			}
			cout << endl;
		}
		//입력
		cout << "내 선택: ";
		cin >> inputNum;

		//체크
		//컴퓨터랑 나랑 가지고있는 숫자를 체크
		BingoCheck(MyBingo, inputNum);
		BingoCheck(ComBingo, inputNum);

		//컴퓨터가 자기 숫자 부르기
		//겹치지않는
		while (1)
		{
			//난수발생
			comNum = RndInt(1, input * input);
			//빙고판을 돌면서 겹치지않는 숫자 찾기

			if (input * input != BingoCheck(ComBingo, comNum))
			{
				//원하는 숫자값이 빙고에 존재 할떄
				break;
				//while 탈출
			}
		}
		//컴퓨터가 겹치지않는 숫자를 찾아냄
		cout << "컴퓨터 선택: " << comNum << endl;
		BingoCheck(MyBingo, comNum);

		//빙고갯수 세기
		MyBingoCount = 0;
		ComBingoCount = 0;
		//가로
		int bc = 0; //컴
		int bc2 = 0; //나
		for (int i = 0; i < input; i++)
		{
			for (int j = 0; j < input; j++)
			{
				//컴퓨터 세기
				if (ComBingo[i][j] == -1)
				{
					bc++;
				}
				if (bc == input)
				{
					ComBingoCount++;
				}
				//내꺼 세기
				if (MyBingo[i][j] == -1)
				{
					bc2++;
				}
				if (bc2 == input)
				{
					MyBingoCount++;
				}
			}
			bc = 0;
			bc2 = 0;
		}

		//세로
		bc = 0; //컴
		bc2 = 0; //나
		for (int i = 0; i < input; i++)
		{
			for (int j = 0; j < input; j++)
			{
				//컴퓨터 세기
				if (ComBingo[j][i] == -1)
				{
					bc++;
				}
				if (bc == input)
				{
					ComBingoCount++;
				}
				//내꺼 세기
				if (MyBingo[j][i] == -1)
				{
					bc2++;
				}
				if (bc2 == input)
				{
					MyBingoCount++;
				}
			}
			bc = 0;
			bc2 = 0;
		}

		//대각선1
		bc = 0; //컴
		bc2 = 0; //나
		for (int i = 0; i < input; i++)
		{
			//00,11,22,33
			if (ComBingo[i][i] == -1)
			{
				bc++;
			}
			if (bc == input)
			{
				ComBingoCount++;
			}
			//내꺼 세기
			if (MyBingo[i][i] == -1)
			{
				bc2++;
			}
			if (bc2 == input)
			{
				MyBingoCount++;
			}
		}

		//대각선2
		bc = 0;
		bc2 = 0;
		for (int i = 0; i < input; i++)
		{
			//input == 4
			//03,12,21,30
			if (ComBingo[input - 1 - i][i] == -1)
			{
				bc++;
			}
			if (bc == input)
			{
				ComBingoCount++;
			}
			//내꺼 세기
			if (MyBingo[input - 1 - i][i] == -1)
			{
				bc2++;
			}
			if (bc2 == input)
			{
				MyBingoCount++;
			}
		}

		//종료조건
		if (MyBingoCount >= 3 || ComBingoCount >= 3)
		{
			cout << "끝" << endl;
			cout << "나:" << MyBingoCount << endl;
			cout << "컴:" << ComBingoCount << endl;
			for (int i = 0; i < input; i++)
			{
				for (int j = 0; j < input; j++)
				{
					cout << MyBingo[i][j] << " ";
				}
				cout << endl;
			}
			cout << "===============================" << endl;
			for (int i = 0; i < input; i++)
			{
				for (int j = 0; j < input; j++)
				{
					cout << ComBingo[i][j] << " ";
				}
				cout << endl;
			}

			break;
		}
	}
}

//과제
//복습