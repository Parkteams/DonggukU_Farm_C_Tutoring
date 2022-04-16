#include<stdio.h>
#define PI 3.14;
//전처리기로 PI정의해서 나중에 계속 나와도 쓸수 있도록 만들기

int main(void)
{
	float radius = 0.0f, width = 0.0f;

	printf("원의 반지름을 입력해주세요: ");
	scanf_s("%f", &radius);

	width = radius * radius * PI;

	printf("원의 넓이: %f", width);

	return 0;
}