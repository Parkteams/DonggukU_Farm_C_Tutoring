#include <iostream>
using namespace std;

int main()
{
	//�迭�� �����ʹ�
	//�ε����� ù�ּҷκ����� �ּҰ� ����

	double a[10]; //a�� ������ //[�氹��]

	for (int i = 0; i < 10; i++)
	{
		a[i] = i;
	}

	cout << a << endl;
	cout << *a << endl;
	cout << &(a[1]) << endl;
	cout << &(a[2]) << endl;
	cout << a + 1 << endl;
	cout << *(a + 1) << endl;

	//a�� �׻� ù�ּҰ��� ��´�
	//*(a + 1) -> a[1]

	//�迭�� ���ӵ� �����̳�

	//�����迭
	int* c = new int[10];
	for (int i = 0; i < 10; i++)
	{
		c[i] = i;
	}

	//�����Ͱ� �ϳ����� �迭�� �������� ���̶� �ϳ��� ���ٰ���
	cout << c[6] << endl;

	delete[] c;

	//���ڿ� -> �迭
	char str[] = "a��de"; //��Ƽ����Ʈ ���ڿ�

	cout << str << endl;
	cout << str + 1 << endl;
	cout << str + 2 << endl;
	cout << str + 3 << endl;

	//string -> ������ �ƴ�

	//����
	char str1[] = "*****";
	char str2[] = "     ";
	//2���� �����

	return 0;
}