#include<iostream>
#include<string.h>
#include<time.h> //�ð��� �̿��� ���� ���� ��� ����
using namespace std;

//Ʈ����ī�� ���, ����ü�̿�
//Ʈ����ī�� ����4�� ������ �̿�

int main()
{
	srand(time(NULL));

	//���ڿ� char*, char[]
	//���ڿ� string
	
	int deck[52] = { 0 };
	for (int i = 0; i < 52; i++)
	{
		deck[i] = i; //0~51
	}

	//����ü
	//����ü ����, ����ü�̸�
	struct CARD
	{
		//���
		int number;		//������ �������
		string shape;	//���ڿ��� �������
	};

	//�迭 �־���?
	//�Ȱ����̸��� ������ ��ȣ���Űܼ� ������
	//���ϰ� ���� ������

	//����ü��
	//�����ŭ ������ �ִ� ����� �ѹ��� ���� ������ ���ϴ�

	//����ü ���� ����
	struct CARD deck2[52]; //��ü �迭 ����
	struct CARD card3;		//��ü ����

	for (int i = 0; i < 52; i++)
	{
		deck2[i].number = i % 13 + 1; //1~13

		switch (i / 13)
		{
		case 0:
			//���ȣ��
			deck2[i].shape = "��";
			break;
		case 1:
			//���ȣ��
			deck2[i].shape = "��";
			break;
		case 2:
			//���ȣ��
			deck2[i].shape = "��";
			break;
		case 3:
			//���ȣ��
			deck2[i].shape = "��";
			break;
		}
		cout << deck2[i].shape << deck2[i].number << endl;
	}

	return 0;
}