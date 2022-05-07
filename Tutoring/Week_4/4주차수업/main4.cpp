#include<iostream>
#include<time.h> //�ð��� �̿��� ���� ���� ��� ����
using namespace std;

//���� �߱�����  for��, while��

int main()
{
	srand(time(NULL));

	int number[9] = { 0 }; //������ 3�� ���ڸ� ���� 1~9�� ������� �迭
	int input[3] = { 0 }; //�Է��� 3�� ����
	int input2 = 0; //�Է��� ���ڸ� ����

	int BallCount = 0, StrikeCount = 0, GameCount = 0;

	//ó�� ���� �����ؼ� 3�� ����
	for (int i = 0; i < 9; i++)
	{
		number[i] = i + 1;
	}

	//���� �˰���
	for (int i = 0; i < 1000; i++)
	{
		
		int dest = rand() % 9; //0~8
		int sour = rand() % 9; 

		//����
		int temp = number[sour];
		number[sour] = number[dest];
		number[dest] = temp;
	}

	//

	while (1)
	{
		cout << "���� �߱�" << endl;
		cout << "��ǻ�� ����: " << number[0] << "," << number[1] << "," << number[2] << endl;
		cout << "���ڸ� ���� �Է��ϼ���: ";
		cin >> input[0];
		cin >> input[1];
		cin >> input[2];

		BallCount = StrikeCount = 0;

		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				if (input[i] == number[j])
				{
					if (i == j) StrikeCount++; //�ڸ��� ������
					else
						BallCount++; //�ڸ��� �ٸ���
				}
			}
		}

		cout << BallCount << 'B' << StrikeCount << 'S' << endl;
		GameCount++; //�õ�Ƚ�� ����

		if (StrikeCount == 3)
		{
			cout << "�õ�Ƚ��" << GameCount << endl;
			break;
		}
		cout << endl;

	}

	return 0;
}