#include<stdio.h>
#define PI 3.14;
//��ó����� PI�����ؼ� ���߿� ��� ���͵� ���� �ֵ��� �����

int main(void)
{
	float radius = 0.0f, width = 0.0f;

	printf("���� �������� �Է����ּ���: ");
	scanf_s("%f", &radius);

	width = radius * radius * PI;

	printf("���� ����: %f", width);

	return 0;
}