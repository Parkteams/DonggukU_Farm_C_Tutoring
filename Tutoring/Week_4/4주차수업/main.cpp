#include<iostream>
#include<time.h> //�ð��� �̿��� ���� ���� ��� ����
using namespace std;

//�ζǻ�����, 7�ڸ��� ��ġ���ʴ� 1~45���ڸ� �����ϰ� ���

int main()
{
	srand(time(NULL)); //���� ����]
	
	int Lotto[7] = {0}; //��ü 0���� �ʱ�ȭ
	Lotto[0] = rand() % 45 + 1; //ù��° �ζ��Լ� ����
	for (int i = 1; i < 7; i++)
	{
		for (int j = 0; j < i; j++)
		{
			Lotto[i] = rand() % 45 + 1;
			if (Lotto[j] == Lotto[i])
			{
				j--;
			}
		}
	}

	for (int i = 0; i < 7; i++)
	{
		cout << Lotto[i] << " ";
	}
	

	return 0;

}