#include<stdio.h>

int main(void)
{
	int income_Y, income_M = 0;
	printf("������ �Է����ּ���: ");
	scanf_s("%d", &income_Y);

	income_M = income_Y / 12;
	printf("����� ����: %d", income_M);

	return 0;
}