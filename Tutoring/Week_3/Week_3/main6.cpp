#include<stdio.h>
#include<iostream>
using namespace std;

//for�� ����
//���̱� ����

int main()
{
	int num = 0;
	cout << "�� ���� ��ȣ ������ ���غ�: " << endl;
	cin >> num;

	//��ȣ�� ���� ���� �� �ְ�, ������ ������� ������ ����� ��
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

	//��ȣ�� ���� �ٸ���, ������ ������� ������ ����� ��
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

	//3�� for��
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