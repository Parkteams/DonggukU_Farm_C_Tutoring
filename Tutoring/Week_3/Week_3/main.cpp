#include<stdio.h>
#include<iostream>
using namespace std;

int main()
{
	//iostream 입출력
	//출력
	cout << "iostream" << endl;
	//endl: 줄 바꾸기
	printf("iostream\n");
	int num = 0;
	cout << num;
	printf("%d",num);
	cout << endl;

	//////////////
	//입력
	cin >> num;
	cout << num << endl;
	scanf_s("%d", &num);
	printf("%d\n", num);

	/////////
	//if 문
	if (0) //if(참, 거짓)
	{ //가정문의 영역
		cout << "출력" << endl;
	}

	////
	
	int number, number2;
	number = 20;

	//참일 경우에 영역을 실행
	if (1)
	{
		int number;
		//아래의 변경은 밖에 반영되지 않는다.
		number = 10;
		cout << number << endl;
		number2 = 30;
		cout << number2 << endl;
	}
	cout << number << endl;

	///
	if (10)
	{
		cout << 10 << endl;
	}
	if ('b')
	{
		cout << 'b' << endl;
	}
	if ('0') //문자 0은 숫자 0이 아니다.
	{
		cout << '0' << endl;
	}

	///
	//비트 연산자
	int a = 4;
	int b = 0;
	//100 000 or하면  100 = 4
	if (a | b)
	{
		cout << (a | b) << endl;
	}
	//100 000 and하면  000 = 0
	if (a & b)
	{
		cout << (a & b) << endl;
	}

	return 0;
}