#include <iostream>
#include <string.h>
#include <time.h>
using namespace std;

//Ʈ����ī�� ���, ����ü�̿�
//Ʈ����ī�� ����4�� ������ �̿�

int main()
{
	srand(time(NULL));

	// ���ڿ� char*, char[]
	// ���ڿ� string
	string shape = "��";
	
	cout << shape << endl;

	/////////////////

	int deck[52] = {0};
	for (int i = 0; i < 52; i++)
	{
		deck[i] = i; // 0~ 51
	}

	/////////////////

	//����ü
	//����ü���� ����ü�̸�
	struct CARD
	{
		//���
		int number;		//������ �������
		string shape;	//���ڿ��� �������
	};

	//�迭 �־���?
	//�Ȱ����̸��� ������ ��ȣ���Űܼ� ��������
	//���ϰ� ���� ������

	//����ü��
	//�����ŭ �ѹ��� ���� ������� ��

	/////////////////
	 
	//����ü ���� ����   (����ü ���� -> ��ü)
	struct CARD deck2[52]; //��ü �迭
	struct CARD card3;		//��ü

	//��ü�� ����� �ʱ�ȭ
	card3.number = 3;
	card3.shape = "A";

	/////////////////

	for (int i = 0; i < 52; i++)
	{
		//���ȣ�� ��ü .
		deck2[i].number = i % 13 + 1; //1~13

		switch ((int)(i / 13))
		{
		case 0:
			//���ȣ��
			deck2[i].shape = "��";
			break;
		case 1:
			deck2[i].shape = "��";
			break;
		case 2:
			deck2[i].shape = "��";
			break;
		case 3:
			deck2[i].shape = "��";
			break;
		}
		cout << deck2[i].shape << deck2[i].number << endl;
	}

	/////////////////

	// ������ ����Ҷ�

	//���� �˰���
	for (int i = 0; i < 1000; i++)
	{
		int dest = rand() % 52; // 0~ 51
		int sour = rand() % 52;
		//����
		//�޴� ���ʰ��� ��ü�� �����ش�.
		struct CARD temp = deck2[dest]; //���ȣ ����ȣ��
		deck2[dest] = deck2[sour];
		deck2[sour] = temp;
	}
	//���� �� ���
	for (int i = 0; i < 52; i++)
	{
		cout << deck2[i].shape << deck2[i].number << endl;

	}

	/////////////////

	return 0;
}



