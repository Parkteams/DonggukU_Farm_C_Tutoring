#include <iostream>
#include <time.h>
using namespace std;

//�����Ͱ���   for, if, while �� Ȱ��

int main()
{
	srand(time(NULL));
	//�� (ȭ�� 1~12 x4)
	int deck[48];
	//������
	int money = 10000;
	//���Ӵ� �ǳʶ� ����
	int GameCount = 0;
	//���� ������ �ݾ�
	int bet = 0;

	//ī�� �ʱ�ȭ
	for (int i = 0; i < 48; i++)
	{
		deck[i] = i % 12 + 1;  //1~12
		//cout << deck[i] << endl;
	}
	/////////////////
	//���� �˰���
	for (int i = 0; i < 1000; i++)
	{
		int dest = rand() % 48; // 0~ 47
		int sour = rand() % 48;
		//����
		int temp = deck[dest];
		deck[dest] = deck[sour];
		deck[sour] = temp;
	}

	/////////////////

	while (1)
	{
		cout << "������ ����" << endl;
		cout << "�� ������:" << money << endl;
		//ī�� ���� ������ ���
		cout << deck[GameCount * 3] << " " <<
			deck[GameCount * 3 + 1] << endl;

		//�º�
		cout << "�� ���ñ�: ";
		//�������� 0���� ���
		if (money == 0)
		{
			cout << "���� ����" << endl;
			break;
		}

		/////////////////

		cin >> bet;
		//�����ݺ��� ���ñ��� ������
		if (money < bet)
		{
			cout << "���� �����ߴ� �� �� �����ϴ�" << endl;
			continue;// �ݺ��� ó������ ���ư���
		}
		//�ּ� ���� ��
		if (bet < 100)
		{
			cout << "�ʹ� ���� 100���̻� �����ض�" << endl;
			continue;// �ݺ��� ó������ ���ư���
		}

		/////////////////

		//���� �������� �������

		cout << "����ī��: " << deck[GameCount * 3 + 2] << endl;

		//���� ?? -> ����ī�尡 �� �տ� ������
		if (deck[GameCount * 3 + 0] >
			deck[GameCount * 3 + 1])
		{
			int temp = deck[GameCount * 3 + 1];
			deck[GameCount * 3 + 1] = deck[GameCount * 3 + 0];
			deck[GameCount * 3 + 0] = temp;
		}

		/////////////////

		//�̱�� ���  +2��  0,1 ���̿� ����
		if (deck[GameCount * 3 + 0] < deck[GameCount * 3 + 2]
			&& deck[GameCount * 3 + 2] < deck[GameCount * 3 + 1])
		{
			cout << "�̰��" << endl;
			money += bet;
		}
		//���°��
		else
		{
			cout << "����" << endl;
			money -= bet;
		}

		/////////////////


		//�ºΰ� ����Ǹ� ī��Ʈ ����
		GameCount++;

		//ī�����
		if (GameCount == 16)
		{
			//48�� �ε��� ���ٽ� ��Ÿ�� ����
			cout << "ī�带 ��� �����Ͽ����ϴ�" << endl;
			break;
		}
		cout << endl;
	}
	/////////////////


	return 0;
}
