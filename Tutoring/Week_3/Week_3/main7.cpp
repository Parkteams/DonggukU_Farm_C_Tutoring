#include<stdio.h>
#include<iostream>
using namespace std;

int main()
{
	//�迭
	//�ڷ��� ������[ũ��]
	//����
	int number[6];
	//�ʱ�ȭ
	for (int i = 0; i < 6; i++) number[i] = 0;
	//����, �ʱ�ȭ
	int number2[6] = { 0 };

	//����: �ѹ��� ���� �����Ҽ� �ֽ��ϴ�
	//����: ��Ÿ�ӿ��� �߻��Ҽ� �ִ�.

	// [�ε���] ���ȣ
	number[0] = 0;
	number[1] = 0;
	number[2] = 3;
	number[3] = 0;
	number[4] = 5;
	number[5] = 0;
	//number[6] = 0; �ε��� ȣ���� Ʋ���� ��쿡 runtime����

	//����
	//1. ���������� �ºα��� �˷��ִ� ���α׷� �����   ��Ʈ: if, else if, else �̿�
	//2. �ζǹ�ȣ ������(�ζ� ��ȣ �� � �Ұ��� �Է¹ް��ϰ�, �������� ���� �ߺ� �ȵǰ� ���)  ��Ʈ: ���� �߻�, for�� �̿�

	//textechkr748@daum.net

	return 0;
}