#include<stdio.h>
#include<iostream>
#include<time.h>
using namespace std;

//진짜 가위바위보

int main()
{
	//난수 기준 만들기(시간을 기준삼아서)
	srand(time(NULL));
	//rand 0~32767 랜덤한 값
	cout << rand() % 3 << endl;

	//%나머지 연산자
	//정수를 정수로 나누고 난 나머지값을 반환
	// 나누고 난 나머지 값은 나눈 수 보다 작다

	///
	//while 반복문
	//while (1)
	//{
	//	cout << "반복문 실행" << rand() << endl;
	//}

	///s

	int isRun = true;
	while (isRun)
	{//반복문 실행
		cout << "가위(0) 바위(1) 보(2) 게임" << endl;
		cout << "가위(0) 바위(1) 보(2) 나가기(3)" << endl;
		int num = rand() % 3;

		int input = 1;
		cin >> input;
		if (input == 3)
		{
			cout << "나가" << endl;
			break;  //반복문 탈출
		}

		switch (input)
		{
		case 0:
			cout << "나는 가위" << endl;
			break;
		case 1:
			cout << "나는 바위" << endl;
			break;
		default: //나머지ㅏ
			cout << "나는 보" << endl;
			break;
		}

		switch (num)
		{
		case 0:
			cout << "컴퓨터는 가위" << endl;
			break;
		case 1:
			cout << "컴퓨터는 바위" << endl;
			break;
		case 2:
			cout << "컴퓨터는 보" << endl;
			break;
		}



		cout << endl;
	}

	return 0;
}