#include<stdio.h>
#include<iostream>
using namespace std;

//if���� �̿��� ���� ���� �� �����

int main()
{
	int MyNum = 0, ComNum = 0;
	cout << "����(0) ����(1) ��(2) ����" << endl;

	cin >> MyNum;
	//��ǻ�ʹ� ����
	ComNum = 0;
	if (MyNum == ComNum)
	{
		cout << "�� ���� ��ǻ�� ���� �����ϴ�" << endl;
	}
	if ((MyNum ==1)&&(ComNum==0))
	{
		cout << "�� ���� ��ǻ�� ���� �̰���ϴ�" << endl;
	}
	if ((MyNum == 2) && (ComNum == 0))
	{
		cout << "�� �� ��ǻ�� ���� �����ϴ�" << endl;
	}

	cin >> MyNum;
	////��ǻ�ʹ� ����
	ComNum = 1;
	if (MyNum == ComNum)
	{
		cout << "�� ���� ��ǻ�� ���� �����ϴ�" << endl;
	}
	if ((MyNum == 0) && (ComNum == 1))
	{
		cout << "�� ���� ��ǻ�� ���� �����ϴ�" << endl;
	}
	if ((MyNum == 2) && (ComNum == 1))
	{
		cout << "�� �� ��ǻ�� ���� �̰���ϴ�" << endl;
	}

	cin >> MyNum;
	////��ǻ�ʹ� ��
	ComNum = 2;
	if (MyNum == ComNum)
	{
		cout << "�� �� ��ǻ�� �� �����ϴ�" << endl;
	}
	if ((MyNum == 0) && (ComNum == 2))
	{
		cout << "�� ���� ��ǻ�� �� �̰���ϴ�" << endl;
	}
	if ((MyNum == 1) && (ComNum == 2))
	{
		cout << "�� ���� ��ǻ�� �� �����ϴ�" << endl;
	}


	return 0;
}