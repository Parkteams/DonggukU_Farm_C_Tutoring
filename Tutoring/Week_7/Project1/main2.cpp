#include <iostream>
#include <string.h>
using namespace std;


//�⼮�� ���α׷�
//�����迭�� �̿��� �⼮��

struct Student
{
	string	name;
	int		age;
	float   weight;
};


int main()
{
	//���� ������ ���ϴ°�
	//����(������Ÿ��)�� �ȵǰ� ��(��Ÿ��)�� �����Ѱ�


	//��ü �迭(����ü ����)�� �Ἥ
	//�迭�� ���� ��Ÿ�ӿ��� (�迭�� ũ�⸦ ����� ����) �ذ�

	struct Student* ClassA; // �迭��ũ�� �̸������� �ȵ�
	int	NumStudent = 0;

	cout << "�� �л����� �Է��� �ּ��� ";
	cin >> NumStudent;

	//���⼭ ũ�Ⱑ �������� ��
	//���� �Ҵ��ؾ߸� ������ ��

	ClassA = new Student[NumStudent];

	for (int i = 0; i < NumStudent; i++)
	{
		cout << "�л��� ���������� �����ּ���" << endl;
		cout << "�л��� �̸� ";
		cin >> ClassA[i].name;
		cout << "�л��� ���� ";
		cin >> ClassA[i].age;
		cout << "�л��� ������ ";
		cin >> ClassA[i].weight;
		cout << endl;
	}
	cout << "�Է��� �������ϴ�." << endl;

	int input = 0, input2 = 0;
	while (1)
	{
		cout << "������� �л� ��ȣ�� �Է��ϼ���(1~" << endl;
		cin >> input;
		if (input > NumStudent)
		{
			cout << "�׷� �л��� �����ϴ�" << endl;
			continue;
		}
		else
		{
			cout << "�л�" << input << endl;
			cout << "�̸�:" << ClassA[input - 1].name << endl;
			cout << "����:" << ClassA[input - 1].age << endl;
			cout << "������:" << ClassA[input - 1].weight << endl;
		}

	}

	delete[] ClassA;
	return 0;
}
