#include<stdio.h>

int main(void)
{
	int income_Y, income_M = 0;
	printf("연봉을 입력해주세요: ");
	scanf_s("%d", &income_Y);

	income_M = income_Y / 12;
	printf("당신의 월급: %d", income_M);

	return 0;
}