#include<stdio.h>
#include<iostream>
using namespace std;

int main()
{
	//iostream �����
	//���
	cout << "iostream" << endl;
	//endl: �� �ٲٱ�
	printf("iostream\n");
	int num = 0;
	cout << num;
	printf("%d",num);
	cout << endl;

	//////////////
	//�Է�
	cin >> num;
	cout << num << endl;
	scanf_s("%d", &num);
	printf("%d\n", num);

	/////////
	//if ��
	if (0) //if(��, ����)
	{ //�������� ����
		cout << "���" << endl;
	}

	////
	
	int number, number2;
	number = 20;

	//���� ��쿡 ������ ����
	if (1)
	{
		int number;
		//�Ʒ��� ������ �ۿ� �ݿ����� �ʴ´�.
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
	if ('0') //���� 0�� ���� 0�� �ƴϴ�.
	{
		cout << '0' << endl;
	}

	///
	//��Ʈ ������
	int a = 4;
	int b = 0;
	//100 000 or�ϸ�  100 = 4
	if (a | b)
	{
		cout << (a | b) << endl;
	}
	//100 000 and�ϸ�  000 = 0
	if (a & b)
	{
		cout << (a & b) << endl;
	}

	return 0;
}