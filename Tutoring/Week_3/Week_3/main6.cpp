#include<stdio.h>
#include<iostream>
using namespace std;

//for문 연습
//공뽑기 게임

int main()
{
	int num = 0;
	cout << "공 총의 번호 갯수를 말해봐: " << endl;
	cin >> num;

	//번호는 서로 같을 수 있고, 순서는 상관없이 나오는 경우의 수
	for (int i = 0; i < num; i++)
	{
		for (int j = i; j < num; j++)
		{
			for (int k = j; k < num; k++)
			{
				cout << " a: " << i << " b: " << j << " c: " << k << endl;
			}
		}
	}

	///
	cout << endl;

	//번호는 서로 다르게, 순서는 상관없이 나오는 경우의 수
	for (int i = 0; i < num; i++)
	{
		for (int j = i+1; j < num; j++)
		{
			for (int k = j+1; k < num; k++)
			{
				cout << " a: " << i << " b: " << j << " c: " << k << endl;
			}
		}
	}

	///
	cout << endl;

	//3중 for문
	int cnt1 = 0;
	int cnt2 = 0;
	int cnt3 = 0;
	for (int i = 1; i <= 3; i++)
	{
		cnt1++;
		for (int j = 1; j <= 3; j++)
		{
			cnt2++;
			for (int k = 1; k <= 3; k++)
			{
				cnt3++;
				cout << "cnt1= " << cnt1 << " cnt2= " << cnt2 << " cnt3 " << cnt3 << endl;
			}
		}
	}

	return 0;
}