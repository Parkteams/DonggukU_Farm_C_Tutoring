#include <iostream>
#include <time.h>
using namespace std;

//for��, ������ �̿��� ����

int main()
{
	//���� ���� �����(�ð��� ���ػ�´�)
	srand(time(NULL));

	//���� ����
	int a = 1;
	int b = 2;

	int temp;
	temp = a;	//��׸��� a�� �Űܳ�����
	a = b;		//a�� b���� ��´�
	b = temp;	//��׸��� �ִ����� b�� �ִ´�.
	//->a�� b�� ���� �ٲ��.
	//////////////
	
	//���� 
	//�� ���� (ī�弯��)
	int Deck[45]; //45�� ī��
	for (int i = 0; i < 45; i++)
	{
		Deck[i] = i + 1;
	}

	//���� �˰���
	for (int i = 0; i < 1000; i++)
	{
		//������ ������ �̴´�.
		int dest = rand() % 45; //������ �ε���
		int sour = rand() % 45;

		//����
		int temp = Deck[sour];
		Deck[sour] = Deck[dest];
		Deck[dest] = temp;
	}

	for (int i = 0; i < 7; i++)
	{
		cout << Deck[i] << endl;
	}

	return 0;//�����Լ� ��
}//main  �Լ����� ��
