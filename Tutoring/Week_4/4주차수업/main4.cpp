#include <iostream>
#include <time.h>
using namespace std;

//���� �߱�����

int main()
{
	srand(time(NULL));
	//���� �߱�

	int number[9] = { 0 }; //������ 3�� ���ڸ� ���� 1~9
	int input[3] = { 0 }; //�Է��� 3������
	int input2 = 0; //�Է��� ���ڸ�����

	//�� ī��Ʈ
	int BallCount = 0, StrikeCount = 0, GameCount = 0;

	//ó�� ���� �����Ͽ�3�� ����
	for (int i = 0; i < 9; i++)
	{
		number[i] = i + 1; // 1~9
	}
	//���� �˰���
	for (int i = 0; i < 1000; i++) //1000�� ���´�
	{
		int dest = rand() % 9;  //0~8
		int sour = rand() % 9;

		int temp = number[dest];
		number[dest] = number[sour];
		number[sour] = temp;
	}

	/////////////////

	//���ڸ� ���� ���� �ݺ�
	while (1) //while��
	{
		cout << "���� �߱�" << endl;
		//�´� Ȯ���ϱ� ���� ��¹�
		cout << "��ǻ�� ����:" << number[0] << ","
			<< number[1] << "," << number[2] << endl;
		cout << "���ڸ� ���� �Է��ϼ���:";
		//���� ���� �Է¹ޱ�
		cin >> input[0];
		cin >> input[1];
		cin >> input[2];
		//��Ʈ����ũ �� ���� ���� 0���� ���� �ʱ�ȭ
		BallCount = StrikeCount = 0;

		for (int i = 0; i < 3; i++)//��
		{
			for (int j = 0; j < 3; j++)//��ǻ��
			{
				if (input[i] == number[j])//���ڰ� ����
				{
					if (i == j)//�ڸ��� ���� ������
					{
						StrikeCount++;
					}
					else//�ڸ��� �ٸ���
					{
						BallCount++;
					}
				}
			}
		}

		/////////////////

		cout << BallCount << 'B' << StrikeCount << 'S' << endl;
		GameCount++; //�õ�Ƚ�� ����

		if (StrikeCount == 3)
		{
			cout << "�õ�Ƚ��" << GameCount << endl;
			break;//�����ִ� �ݺ��� Ż��
		}
		cout << endl;
	}


	return 0;
}



