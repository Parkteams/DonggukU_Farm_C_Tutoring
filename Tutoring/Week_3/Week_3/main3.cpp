#include<stdio.h>
#include<iostream>
#include<time.h>
using namespace std;

//��¥ ����������

int main()
{
	//���� ���� �����(�ð��� ���ػ�Ƽ�)
	srand(time(NULL));
	//rand 0~32767 ������ ��
	cout << rand() % 3 << endl;

	//%������ ������
	//������ ������ ������ �� ���������� ��ȯ
	// ������ �� ������ ���� ���� �� ���� �۴�

	///
	//while �ݺ���
	//while (1)
	//{
	//	cout << "�ݺ��� ����" << rand() << endl;
	//}

	///s

	int isRun = true;
	while (isRun)
	{//�ݺ��� ����
		cout << "����(0) ����(1) ��(2) ����" << endl;
		cout << "����(0) ����(1) ��(2) ������(3)" << endl;
		int num = rand() % 3;

		int input = 1;
		cin >> input;
		if (input == 3)
		{
			cout << "����" << endl;
			break;  //�ݺ��� Ż��
		}

		switch (input)
		{
		case 0:
			cout << "���� ����" << endl;
			break;
		case 1:
			cout << "���� ����" << endl;
			break;
		default: //��������
			cout << "���� ��" << endl;
			break;
		}

		switch (num)
		{
		case 0:
			cout << "��ǻ�ʹ� ����" << endl;
			break;
		case 1:
			cout << "��ǻ�ʹ� ����" << endl;
			break;
		case 2:
			cout << "��ǻ�ʹ� ��" << endl;
			break;
		}



		cout << endl;
	}

	return 0;
}