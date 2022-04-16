#define _CRT_SECURE_NO_WARNINGS   //visual studio에서 scanf()쓰기 위해 쓰는것, 걍 scanf_s()쓰면 안써도 됨
#include <stdio.h>

int main(void)
{
	int x;
	int y;
	int sum;

	printf("첫번째 숫자를 입력하세요: ");
	scanf("%d", &x);
	//%d: ,정수형으로 입력한다.
	//&x: &:레퍼런스, x의 위치가 가리키는 값에 입력값을 집어넣겠다.

	printf("두번째 숫자를 입력하세요: ");
	scanf("%d", &y);
	//%d: ,정수형으로 입력한다.
	//&y: &:레퍼런스, y의 위치가 가리키는 값에 입력값을 집어넣겠다.

	//%f: float 형의 실수로 입력한다.
	//%lf: double 형의 실수로 입력한다.
	//%c: 문자 형태로 입력한다.
	//%s: 문자열 형태로 입력한다.

	sum = x + y;
	printf("두수의 합: %d\n", sum);

	return 0;

}