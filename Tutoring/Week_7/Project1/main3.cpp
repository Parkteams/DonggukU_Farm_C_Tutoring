#include <iostream>
#include <string.h>
#include <time.h>
using namespace std;

//�������
//������ 2�߹迭
//���̵� �޻��

int input = 0;

//��������Լ�
void Create(int**& ppBingo) //int**&  ���� call by reference, �����ʹ� p
{
	//�������� ���(4byte)
	//ppBingo = ComBingo, ppBingo = MyBingo

	//���۷��� �ڷ����� ���(x)
	//ComBingo �Ǻ����� ppBingo

	//2�������� �迭 ����� �ʱ�ȭ
	ppBingo = new int* [input];
	for (int i = 0; i < input; i++)
	{
		ppBingo[i] = new int[input];
		for (int j = 0; j < input; j++)
		{
			ppBingo[i][j] = i * input + j;
		}
	}
}

//���� �����Լ�
void BingoShuffle(int**& ppBingo)
{
	//����
	for (int i = 0; i < 1000; i++)
	{
		int dest = rand() % input;
		int sour = rand() % input;
		int dest2 = rand() % input;
		int sour2 = rand() % input;

		int temp = ppBingo[dest][dest2];
		ppBingo[dest][dest2] = ppBingo[sour][sour2];
		ppBingo[sour][sour2] = temp;
	}
}

//����üũ�Լ�
int BingoCheck(int**& ppBingo, int Check)
{
	int Count = 0; //��������
	for (int i = 0; i < input; i++)
	{
		for (int j = 0; j < input; j++)
		{
			if (Check == ppBingo[i][j])
			{
				//�������ִ� ���� �ٸ����� ġȯ
				ppBingo[i][j] = -1;
				//���⼭ �����̸� input*input���� �۴�
				return Count;
			}
			Count++;
		}
	}
	//������ Ż�� ������(ã�°��� ������) 
	//ī��Ʈ���� input*input;
	return Count;
}

//������ ������ ��ȯ �Լ�

//������         3 ,     5
int RndInt(int start, int end)
{
	return rand() % (end - start + 1) + start;
}

int main()
{
	srand(time(NULL));

	//����ĭ
	int** MyBingo = nullptr;
	int** ComBingo = nullptr;

	//�����Է�
	int inputNum = 0, comNum = 0;

	//���� ������ ����
	int MyBingoCount, ComBingoCount;
	MyBingoCount = ComBingoCount = 0;

	cout << "�������! ���ϴ� ����ĭ ����� �Է����ּ���" << endl;
	cout << "4 -> 4x4, 5-> 5x5" << endl;

	cin >> input;

	Create(MyBingo);
	Create(ComBingo);
	//������ �ϼ�
	//����
	BingoShuffle(MyBingo);
	BingoShuffle(ComBingo);

	//�ݺ�
	while (1)
	{
		//���
		cout << "�� ����:" << MyBingoCount << endl;
		cout << "Com ����:" << ComBingoCount << endl;
		//������ ���
		//�����ΰ�
		for (int i = 0; i < input; i++)
		{
			for (int j = 0; j < input; j++)
			{
				cout << MyBingo[i][j] << "\t";
			}
			cout << endl;
		}
		cout << "===============================" << endl;
		for (int i = 0; i < input; i++)
		{
			for (int j = 0; j < input; j++)
			{
				cout << ComBingo[i][j] << "\t";
			}
			cout << endl;
		}
		//�Է�
		cout << "�� ����: ";
		cin >> inputNum;

		//üũ
		//��ǻ�Ͷ� ���� �������ִ� ���ڸ� üũ
		BingoCheck(MyBingo, inputNum);
		BingoCheck(ComBingo, inputNum);

		//��ǻ�Ͱ� �ڱ� ���� �θ���
		//��ġ���ʴ�
		while (1)
		{
			//�����߻�
			comNum = RndInt(1, input * input);
			//�������� ���鼭 ��ġ���ʴ� ���� ã��

			if (input * input != BingoCheck(ComBingo, comNum))
			{
				//���ϴ� ���ڰ��� ���� ���� �ҋ�
				break;
				//while Ż��
			}
		}
		//��ǻ�Ͱ� ��ġ���ʴ� ���ڸ� ã�Ƴ�
		cout << "��ǻ�� ����: " << comNum << endl;
		BingoCheck(MyBingo, comNum);

		//������ ����
		MyBingoCount = 0;
		ComBingoCount = 0;
		//����
		int bc = 0; //��
		int bc2 = 0; //��
		for (int i = 0; i < input; i++)
		{
			for (int j = 0; j < input; j++)
			{
				//��ǻ�� ����
				if (ComBingo[i][j] == -1)
				{
					bc++;
				}
				if (bc == input)
				{
					ComBingoCount++;
				}
				//���� ����
				if (MyBingo[i][j] == -1)
				{
					bc2++;
				}
				if (bc2 == input)
				{
					MyBingoCount++;
				}
			}
			bc = 0;
			bc2 = 0;
		}

		//����
		bc = 0; //��
		bc2 = 0; //��
		for (int i = 0; i < input; i++)
		{
			for (int j = 0; j < input; j++)
			{
				//��ǻ�� ����
				if (ComBingo[j][i] == -1)
				{
					bc++;
				}
				if (bc == input)
				{
					ComBingoCount++;
				}
				//���� ����
				if (MyBingo[j][i] == -1)
				{
					bc2++;
				}
				if (bc2 == input)
				{
					MyBingoCount++;
				}
			}
			bc = 0;
			bc2 = 0;
		}

		//�밢��1
		bc = 0; //��
		bc2 = 0; //��
		for (int i = 0; i < input; i++)
		{
			//00,11,22,33
			if (ComBingo[i][i] == -1)
			{
				bc++;
			}
			if (bc == input)
			{
				ComBingoCount++;
			}
			//���� ����
			if (MyBingo[i][i] == -1)
			{
				bc2++;
			}
			if (bc2 == input)
			{
				MyBingoCount++;
			}
		}

		//�밢��2
		bc = 0;
		bc2 = 0;
		for (int i = 0; i < input; i++)
		{
			//input == 4
			//03,12,21,30
			if (ComBingo[input - 1 - i][i] == -1)
			{
				bc++;
			}
			if (bc == input)
			{
				ComBingoCount++;
			}
			//���� ����
			if (MyBingo[input - 1 - i][i] == -1)
			{
				bc2++;
			}
			if (bc2 == input)
			{
				MyBingoCount++;
			}
		}

		//��������
		if (MyBingoCount >= 3 || ComBingoCount >= 3)
		{
			cout << "��" << endl;
			cout << "��:" << MyBingoCount << endl;
			cout << "��:" << ComBingoCount << endl;
			for (int i = 0; i < input; i++)
			{
				for (int j = 0; j < input; j++)
				{
					cout << MyBingo[i][j] << " ";
				}
				cout << endl;
			}
			cout << "===============================" << endl;
			for (int i = 0; i < input; i++)
			{
				for (int j = 0; j < input; j++)
				{
					cout << ComBingo[i][j] << " ";
				}
				cout << endl;
			}

			break;
		}
	}
}

//����
//����