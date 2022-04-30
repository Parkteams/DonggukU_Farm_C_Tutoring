#include<stdio.h>
#include<iostream>
using namespace std;

//if문을 이용한 가위 바위 보 만들기

int main()
{
	int MyNum = 0, ComNum = 0;
	cout << "가위(0) 바위(1) 보(2) 게임" << endl;

	cin >> MyNum;
	//컴퓨터는 가위
	ComNum = 0;
	if (MyNum == ComNum)
	{
		cout << "나 가위 컴퓨터 가위 비겼습니다" << endl;
	}
	if ((MyNum ==1)&&(ComNum==0))
	{
		cout << "나 바위 컴퓨터 가위 이겼습니다" << endl;
	}
	if ((MyNum == 2) && (ComNum == 0))
	{
		cout << "나 보 컴퓨터 가위 졌습니다" << endl;
	}

	cin >> MyNum;
	////컴퓨터는 바위
	ComNum = 1;
	if (MyNum == ComNum)
	{
		cout << "나 바위 컴퓨터 바위 비겼습니다" << endl;
	}
	if ((MyNum == 0) && (ComNum == 1))
	{
		cout << "나 가위 컴퓨터 바위 졌습니다" << endl;
	}
	if ((MyNum == 2) && (ComNum == 1))
	{
		cout << "나 보 컴퓨터 바위 이겼습니다" << endl;
	}

	cin >> MyNum;
	////컴퓨터는 보
	ComNum = 2;
	if (MyNum == ComNum)
	{
		cout << "나 보 컴퓨터 보 비겼습니다" << endl;
	}
	if ((MyNum == 0) && (ComNum == 2))
	{
		cout << "나 가위 컴퓨터 보 이겼습니다" << endl;
	}
	if ((MyNum == 1) && (ComNum == 2))
	{
		cout << "나 바위 컴퓨터 보 졌습니다" << endl;
	}


	return 0;
}