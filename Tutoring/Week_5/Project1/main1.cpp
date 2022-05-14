#include<iostream>
#include<time.h>
using namespace std;

//�����Ͱ���  for, if, while �� Ȱ��

int main()
{
	srand(time(NULL));

	//��(ȭ�� 1~12 x 4)
	int deck[48];

	//������
	int money = 10000;

	//���Ӵ� �ǳʶ� ����
	int GameCount = 0;

	//���� ������ �ݾ�
	int bet = 0;

	for (int i = 0; i < 48; i++)
	{
		deck[i] = i % 12 + 1; //1~12
	}

	//���� �˰���
	for (int i = 0; i < 1000; i++)
	{
		int dest = rand() % 48;
		int sour = rand() % 48;
		//����
		int temp = deck[dest];
		deck[dest] = deck[sour];
		deck[sour] = temp;
	}

	while (1)
	{
		cout << "������ ����" << endl;
		cout << "�� ������: " << money << endl;
		//ī�� ���� �����Ÿ� ���
		cout << deck[GameCount * 3] << " " << deck[GameCount * 3 + 1] << endl;

		cout << "�� ���ñ�: ";
		//�������� 0���� ���
		if (money == 0)
		{
			cout << "���� �����մϴ�. " << endl;
			break;
		}

		cin >> bet;
		//�����ݺ��� ���ñ��� ������
		if (money < bet)
		{
			cout << "���� �����մϴ�" << endl;
			continue; //�ݺ��� ó������ ���ư���
		}
		//�ּ� ���� ��
		if (bet < 100)
		{
			cout << "100�� �̻� �����ϼ���" << endl;
			continue;
		}

		//���� �������� ���� ���
		cout << "����ī��: " << deck[GameCount * 3 + 2] << endl;

		//���� -> ����ī�尡 �� �տ� ������
		if (deck[GameCount * 3 + 0] > deck[GameCount * 3 + 1])
		{
			int temp = deck[GameCount * 3 + 1];
			deck[GameCount * 3 + 1] = deck[GameCount * 3 + 0];
			deck[GameCount * 3 + 0] = temp;
		}

		//�̱�� ���
		if (deck[GameCount * 3 + 0] < deck[GameCount * 3 + 2] and deck[GameCount * 3 + 2] < deck[GameCount * 3 + 1])
		{
			cout << "�̰���ϴ�" << endl;
			money += bet;
		}
		else
		{
			cout << "�����ϴ�" << endl;
			money -= bet;
		}

		//�ºΰ� ����Ǹ� ī��Ʈ ����
		GameCount++;

		//ī�� ����
		if (GameCount == 16)
		{
			cout << "ī�带 ��� �����Ͽ����ϴ�." << endl;
			break;
		}
		cout << endl;
	}


	return 0;
}