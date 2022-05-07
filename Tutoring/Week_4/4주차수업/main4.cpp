#include<iostream>
#include<time.h> //시간을 이용한 난수 생성 헤더 파일
using namespace std;

//숫자 야구게임  for문, while문

int main()
{
	srand(time(NULL));

	int number[9] = { 0 }; //랜덤한 3개 숫자를 뽑을 1~9를 집어넣을 배열
	int input[3] = { 0 }; //입력할 3개 숫자
	int input2 = 0; //입력할 세자리 숫자

	int BallCount = 0, StrikeCount = 0, GameCount = 0;

	//처음 숫자 셔플해서 3개 고르기
	for (int i = 0; i < 9; i++)
	{
		number[i] = i + 1;
	}

	//셔플 알고리즘
	for (int i = 0; i < 1000; i++)
	{
		
		int dest = rand() % 9; //0~8
		int sour = rand() % 9; 

		//스왑
		int temp = number[sour];
		number[sour] = number[dest];
		number[dest] = temp;
	}

	//

	while (1)
	{
		cout << "숫자 야구" << endl;
		cout << "컴퓨터 숫자: " << number[0] << "," << number[1] << "," << number[2] << endl;
		cout << "숫자를 세개 입력하세요: ";
		cin >> input[0];
		cin >> input[1];
		cin >> input[2];

		BallCount = StrikeCount = 0;

		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				if (input[i] == number[j])
				{
					if (i == j) StrikeCount++; //자리가 같을떄
					else
						BallCount++; //자리가 다를때
				}
			}
		}

		cout << BallCount << 'B' << StrikeCount << 'S' << endl;
		GameCount++; //시도횟수 증가

		if (StrikeCount == 3)
		{
			cout << "시도횟수" << GameCount << endl;
			break;
		}
		cout << endl;

	}

	return 0;
}