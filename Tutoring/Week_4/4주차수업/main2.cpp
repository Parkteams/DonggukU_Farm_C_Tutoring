#include <iostream>
#include <time.h>
using namespace std;

//���� ���� �� ����, ������� ������ֱ�

int main()
{
	srand(time(NULL));
	//�ð����� ���� ������

	int Player = 0, Computer = 0, Result = 0;
	int Win_Count = 0, Loose_Count = 0;

	bool isExit = true;

	while (isExit)
	{
		cout << "����(0), ����(1), ��(2), ������(������)" << endl;
		cout << "��: " << Win_Count << " " << "��: " << Loose_Count << endl;
		cin >> Player; //�Է¹ޱ�
		if (Player != 0 and Player != 1 and Player != 2)
		{
			cout << "����" << endl;
			break;	//���� �ֱ� �ݺ���Ż��
		}
		Computer = rand() % 3; //��ǻ�� �� ���� 0~2

		////////////

		switch (Player)
		{
		case 0:
			cout << "��: ����" << "\t";
			break;
		case 1:
			cout << "��: ����" << "\t";
			break;
		case 2:
			cout << "��: ��" << "\t";
			break;
		}

		switch (Computer)
		{
		case 0:
			cout << "��ǻ��: ����" << endl;
			break;
		case 1:
			cout << "��ǻ��: ����" << endl;
			break;
		case 2:
			cout << "��ǻ��: ��" << endl;
			break;
		}

		////////////

		if (Computer == Player) //���
		{
			Result = 0;
		}
		else if ((Computer - Player) == 1) //��ǻ�Ͱ� �̱�
		{
			Result = 1;
		}
		else if ((Computer == 0) && (Player == 2)) //��ǻ�Ͱ� �̱�
		{
			Result = 1;
		}
		else //�÷��̰Ű� �̱�
		{
			Result = 2;
		}

		///////////////

		switch (Result)
		{
		case 0:
			cout << "����" << endl;
			break;
		case 1:
			cout << "����" << endl;
			Loose_Count++;
			break;
		case 2:
			cout << "�̰��" << endl;
			Win_Count++;
			break;
		}
		cout << endl;

	}//while ���� ��
	////////////////

	return 0;
}