#include<iostream>
#include<time.h> //�ð��� �̿��� ���� ���� ��� ����
using namespace std;

//for��, ������ �̿��� ����

int main()
{
	srand(time(NULL));

	//���� ����
	int a = 1;
	int b = 2;

	int temp;
	temp = a;
	a = b;
	b = temp;

	//��Ǯ
	//�� ����(ī�弯��)
	int Deck[45] = {0};//45���� ī��
	for (int i = 0; i < 45; i++)
	{
		Deck[i] = i + 1;
	}

	//���� �˰���
	for (int i = 0; i < 1000; i++)
	{
		//������ ������ �̴´�.
		int dest = rand() % 45; //0���� 44�� ������ ���� ��
		int sour = rand() % 45; //0���� 44�� ������ ���� ��

		//����
		int temp = Deck[sour];
		Deck[sour] = Deck[dest];
		Deck[dest] = temp;
	}

	for (int i = 0; i < 7; i++)
	{
		cout << Deck[i] << endl;
	}


	return 0;
}