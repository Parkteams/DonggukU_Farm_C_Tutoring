#define _CRT_SECURE_NO_WARNINGS   //visual studio���� scanf()���� ���� ���°�, �� scanf_s()���� �Ƚᵵ ��
#include <stdio.h>

int main(void)
{
	int x;
	int y;
	int sum;

	printf("ù��° ���ڸ� �Է��ϼ���: ");
	scanf("%d", &x);
	//%d: ,���������� �Է��Ѵ�.
	//&x: &:���۷���, x�� ��ġ�� ����Ű�� ���� �Է°��� ����ְڴ�.

	printf("�ι�° ���ڸ� �Է��ϼ���: ");
	scanf("%d", &y);
	//%d: ,���������� �Է��Ѵ�.
	//&y: &:���۷���, y�� ��ġ�� ����Ű�� ���� �Է°��� ����ְڴ�.

	//%f: float ���� �Ǽ��� �Է��Ѵ�.
	//%lf: double ���� �Ǽ��� �Է��Ѵ�.
	//%c: ���� ���·� �Է��Ѵ�.
	//%s: ���ڿ� ���·� �Է��Ѵ�.

	sum = x + y;
	printf("�μ��� ��: %d\n", sum);

	return 0;

}