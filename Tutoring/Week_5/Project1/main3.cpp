#include "Trump.h"

int main()
{
	srand(time(NULL));

	init1(); //ī�尪 ����
	Shuffle1();

	int money = 10000;
	int input = 0, bet = 0, openCard = 0;
	int GameCount = 0;
	openCard = 10;

	while (1)
	{
		cout << "����(1) �ο�(2) ����(3) ����" << endl;
		cout << "�� ��: " << money << endl;

		//ī�带 openCard��ŭ GameCount�ݿ��ؼ� ���
		Print2(openCard, GameCount);

		cout << "���ñ� �Է�: ";
		cin >> bet;
		if (bet > money)
		{
			cout << "���� �����մϴ�" << endl;
			continue;
		}
		else if (bet <= 0)
		{
			cout << "�ٽ� �������ּ���" << endl;
			continue;
		}

		cout << "���� �ο� ����?";
		cin >> input;
		cout << "����ī��: " << Trump[(GameCount + 1) * openCard - 1].number << endl;

		switch (input)
		{
		case 1:
			if (Trump[(GameCount + 1) * openCard - 1].number > 7)
			{
				cout << "�¸�" << endl;
				money += bet;
			}
			else
			{
				cout << "�й�" << endl;
				money -= bet;
			}
			break;
		case 2:
			if (Trump[(GameCount + 1) * openCard - 1].number < 7)
			{
				cout << "�¸�" << endl;
				money += bet;
			}
			else
			{
				cout << "�й�" << endl;
				money -= bet;
			}
			break;
		case 3:
			if (Trump[(GameCount + 1) * openCard - 1].number == 7)
			{
				cout << "�¸�" << endl;
				money += bet*5;
			}
			else
			{
				cout << "�й�" << endl;
				money -= bet;
			}
			break;
		default:
			cout << "�߸��ƽ��ϴ�." << endl;
			return 0;
			break;
		}

		//����Ƚ�� ����
		GameCount++;

		if ((GameCount + 1) * openCard >= 52) //ī������� �ʰ��ϴ°��
		{
			cout << "ī�尡 �� ���������ϴ� ī�带 �ٽ� �����ϴ�" << endl;
			Shuffle1();
			GameCount = 0;
		}

	}

	return 0;

}

//����
//������� ���� 3���� �ƹ��ų� �ٽø����(����������(ai), �����Ͱ���, ���̷ο켼��)
//�ణ �����ؼ� �����