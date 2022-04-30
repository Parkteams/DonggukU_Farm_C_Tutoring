#include<stdio.h>
#include<iostream>
using namespace std;

int main()
{
	//반복문		변수선언		조건		i+=1(증감치)
	for (int i = 0; i < 5; i++)
	{//반복문 시작전에 조건을 비교
		cout << i << endl;
	}//반복문 끝나는 시점에 증감치가 적용

	///
	for (int i = 2; i > 4; i++)
	{
		cout << i << endl;
	}
	///
	//2,3
	for (int i = 2; i < 4; i++)
	{
		cout << i << endl;
	}

	///
	//계속 반복
	for (int i = 2; i < 4; i -= 3)
	{
		//cout << i << endl;
	}

	return 0;
}