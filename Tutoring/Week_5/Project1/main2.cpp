#include "Trump.h" //�ش� ����� ������ �����Ѵ�.
//.h �������
//������ ������ �Űܴ� ������ �ְ� ���� ����� ���Խ�ų�� �ִ�.

int sum(int a, int b)
{
	//�Ű������� �����ϰ� ȣ���Ͽ� �Լ��� �θ���
	//int a = number1, int b = number2

	return a + b;
}

//��հ��� ��ȯ�ϴ� �Լ��� �����
float Avg(int a, int b, int c)
{
	return (a + b + c) / 3;
}

float Avg2(int a[], int size)
{
	int temp = 0; //��������
	for (int i = 0; i < size; i++)
	{
		temp += a[i];
	}
	return (float)temp / (float)size;
}

int main()
{
	//�Լ�����
	//��ȯ�� �Լ��̸�(�Ű�����)

	//�Լ� ȣ��
	//�Լ��̸�(�Ű�����)
	//ȣ���ϸ� ���ϰ��� �ش�.

	int number1 = 3;
	int number2 = 4;

	number1 = sum(number1, number2);

	cout << number1 << endl;
	//number1 -> 7

	cout << Avg(number1, number2, 10) << endl;

	int number3[10];
	for (int i = 0; i < 10; i++)
	{
		number3[i] = i;
	}
	cout << Avg2(number3, 10) << endl;

	//�Լ��� ��ư� �����Ұ� ����
	//����� �ҷ����°Ű�
	//ȣ�������� �� ���ϰ��� �޾ƿ´�.

	return 0;
}