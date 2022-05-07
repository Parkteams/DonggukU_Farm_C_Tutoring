#include <iostream>
#include <time.h>
using namespace std;

//숫자 야구게임

int main()
{
	srand(time(NULL));
	//숫자 야구

	int number[9] = { 0 }; //랜덤한 3개 숫자를 뽑을 1~9
	int input[3] = { 0 }; //입력할 3개숫자
	int input2 = 0; //입력할 세자리숫자

	//각 카운트
	int BallCount = 0, StrikeCount = 0, GameCount = 0;

	//처음 숫자 셔플하여3개 고르기
	for (int i = 0; i < 9; i++)
	{
		number[i] = i + 1; // 1~9
	}
	//셔플 알고리즘
	for (int i = 0; i < 1000; i++) //1000번 섞는다
	{
		int dest = rand() % 9;  //0~8
		int sour = rand() % 9;

		int temp = number[dest];
		number[dest] = number[sour];
		number[sour] = temp;
	}

	/////////////////

	//숫자를 먼저 고른후 반복
	while (1) //while문
	{
		cout << "숫자 야구" << endl;
		//맞는 확인하기 위한 출력문
		cout << "컴퓨터 숫자:" << number[0] << ","
			<< number[1] << "," << number[2] << endl;
		cout << "숫자를 세개 입력하세요:";
		//세개 숫자 입력받기
		cin >> input[0];
		cin >> input[1];
		cin >> input[2];
		//스트라이크 볼 세기 전에 0으로 먼저 초기화
		BallCount = StrikeCount = 0;

		for (int i = 0; i < 3; i++)//나
		{
			for (int j = 0; j < 3; j++)//컴퓨터
			{
				if (input[i] == number[j])//숫자가 같다
				{
					if (i == j)//자리수 까지 같을때
					{
						StrikeCount++;
					}
					else//자리가 다를때
					{
						BallCount++;
					}
				}
			}
		}

		/////////////////

		cout << BallCount << 'B' << StrikeCount << 'S' << endl;
		GameCount++; //시도횟수 증가

		if (StrikeCount == 3)
		{
			cout << "시도횟수" << GameCount << endl;
			break;//덮고있는 반복문 탈출
		}
		cout << endl;
	}


	return 0;
}



