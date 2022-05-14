#pragma once  //��ó���� �ߺ��ؼ� ����� �д°� ���ƶ�
#include<iostream> //����� c++ ���̺귯��
#include<string.h> //c ���̺귯��
#include<time.h> //c ���̺귯��
using namespace std;

struct CARD1
{
	string shape;
	int number;
};

struct CARD1 Trump[52]; //��ü �迭
struct CARD1 Hwatoo[48]; //��ü �迭

void Shuffle1()
{
	for (int i = 0; i < 1000; i++)
	{
		int dest = rand() % 52;
		int sour = rand() % 52;

		CARD1 temp = Trump[dest];
		Trump[dest] = Trump[sour];
		Trump[sour] = temp;
	}
}

void Print1()
{
	for (int i = 0; i < 52; i++)
	{
		switch (Trump[i].number)
		{
		case 1:
			cout << Trump[i].shape << 'A' << endl;
			break;
		case 11:
			cout << Trump[i].shape << 'J' << endl;
			break;
		case 12:
			cout << Trump[i].shape << 'Q' << endl;
			break;
		case 13:
			cout << Trump[i].shape << 'K' << endl;
			break;
		default:
			cout << Trump[i].shape << Trump[i].number << endl;
			break;
		}
	}
}
//�����̸��� �Լ��� �����Ҽ� �ֽ��ϴ�.
void Print2(int openCard, int GameCount) //������ ī�� �� 
{
	for (int i = 0; i < openCard - 1; i++)
	{
		switch (Trump[GameCount * openCard + i].number)
		{
		case 1:
			cout << Trump[GameCount * openCard + i].shape << 'A' << "\t";
			break;
		case 11:
			cout << Trump[GameCount * openCard + i].shape << 'J' << "\t";
			break;
		case 12:
			cout << Trump[GameCount * openCard + i].shape << 'Q' << "\t";
			break;
		case 13:
			cout << Trump[GameCount * openCard + i].shape << 'K' << "\t";
			break;
		default:
			cout << Trump[GameCount * openCard + i].shape << Trump[GameCount * openCard + i].number << "\t";
			break;
		}
	}
	cout << "??" << endl;
}

void init1()
{
	for (int i = 0; i < 52; i++)
	{
		Trump[i].number = i % 13 + 1;

		switch (i / 13)
		{
		case 0:
			Trump[i].shape = "��";
			break;
		case 1:
			Trump[i].shape = "��";
			break;
		case 2:
			Trump[i].shape = "��";
			break;
		case 3:
			Trump[i].shape = "��";
			break;
		}
	}
}