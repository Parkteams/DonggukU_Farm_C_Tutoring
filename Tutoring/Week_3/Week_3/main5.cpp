#include<stdio.h>
#include<iostream>
using namespace std;

int main()
{
	//�ݺ���		��������		����		i+=1(����ġ)
	for (int i = 0; i < 5; i++)
	{//�ݺ��� �������� ������ ��
		cout << i << endl;
	}//�ݺ��� ������ ������ ����ġ�� ����

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
	//��� �ݺ�
	for (int i = 2; i < 4; i -= 3)
	{
		//cout << i << endl;
	}

	return 0;
}