//������ �ڷ���
//������ ���
//����: ����ڿ��Լ� �޴� �����͸� �����ϴ� ���. �ѹ� ���� ����Ǿ �������� �ٸ� ������ ���� ����. ��) num
//���: �ѹ� �������� ���α׷��� ����Ǵ� ���ȿ� ���� ������� �ʴ´�. ��) 4
// 1��

//�ڷ���: �������� ����  -������, �ε��Ҽ�����, ������
//������
//short			2byte		-32768 ~ 32767
//int			4byte		�� -21�� ~ 21��
//long			4byte		�� -21�� ~ 21��
//long long		8byte		�ſ� ŭ
//�ε��Ҽ�����
//float
//double
//long double
//���������� ������
//char
//2��

//unsigned, signed ������
//unsigned�� ���̸� ������ ���ܵǾ� �� ���� ������ ����� ��Ÿ���� ����
//signed�� �ڷ����� ������ ���� �� ������ ����� �ϴµ� ��� signed int = int
//�����÷ο�
//������ ������ ��Ÿ�� �� �ִ� ������ ������ ���ѵǾ� �־� ������ ��Ÿ�� �� �ִ� ������ �Ѵ� ���ڸ� �����Ϸ��� �Ҷ� �߻��� �� �ִ� �����÷ο찡 �߻��Ҽ� �ִ�.
//3��

//��� - �������, ��ȣ���
//�������: 12, 100 ���� ���ڷ� ǥ��
//��ȣ���: #define ���� ���, const Ű���� ���
//#define EXCHANGE_RATE 1120
//�����Ϸ��� �����ϱ� ���� ��ó������ ó��
//const int EXCHANGE_RATE = 1120
//����ÿ� const�� �ٿ��� ������ �ʱ�ȭ�� �Ŀ� �� ���� ����ɼ� ����.
//4��

//�ε� �Ҽ�����
//�ε� �Ҽ���: �Ǽ��� ������ ������ ����� ǥ��-> �Ǽ��� ������ ���� ����
//float		4byte		8bit ����, 24bit ����
//double	8byte		11bit ����, 53bit ����
//�Ǽ� ��� ������ : %f
//�ε� �Ҽ��� ���: 3.141592->double�� ���
//3.141592f->float�� ���
//���� ��� ������� �޸� ��Ȯ���� ���� ��찡 ���Ƽ� ������ �߻��ϱ� ����.
//float ���� double�� ������ �� ����.

//������
//char��-> �ƽ�Ű�ڵ�(128) + Ȯ�� �ƽ�Ű�ڵ�(128,�׷��ȹ���, ���Ͼ�)
//���ڻ��: ���� ����ǥ�� ������ ����
//5��




//1��
/*
#include <stdio.h>

int main(void)
{
	double radius;
	double area;  //radius, area->����

	printf("���� ������ �Է��Ͻÿ�:");
	scanf_s("%lf", &radius);
	//3.141592->���
	area = 3.141592 * radius * radius;
	printf("���� ����: %f \n", area);

	return 0;
}
*/

//2��
/*
#include <stdio.h>

int main(void)
{
	short year = 0;
	int sale = 0;
	long total_sale = 0;
	long long large_value;

	year = 10;
	sale = 200000000;
	total_sale = year * sale;

	printf("total_sale = %d \n", total_sale);

	return 0;
}
*/

//3��
/*
#include <stdio.h>
#include <limits.h> //�������� �Ѱ踦 �˷��ִ� �������

int main(void)
{
	short s_money = SHRT_MAX; //32767
	unsigned short u_money = USHRT_MAX; //65535

	s_money = s_money + 1; //�����÷ο� �߻�
	printf("s_money = %d\n",s_money);

	u_money = u_money + 1; //�����÷ο� �߻�
	printf("u_money = %d\n",u_money);

	return 0;
}
//->�Ѱ踦 ����� �ٽ� ó������ ���ư���.
*/

//4��
/*
#include <stdio.h>
#define TAX_RATE 0.2    //define �̿��� ��ȣ��� ����
int main(void)
{
	const int MONTHS = 12; //const �̿��� ��ȣ��� ����
	int m_salary,y_salary;

	printf("������ �Է��Ͻÿ�: );
	scanf_s("%d",&m_salary);

	y_salary= MONTHS * m_salary;
	printf("������ %d�Դϴ�.\n",y_salary);
	printf("������ %f�Դϴ�.\n",y_salary*TAX_RATE );

	return 0;
}
*/

//5��
/*#include<stdio.h>

int main(void)
{
	char code1 = 'A'; //���� ����� �ʱ�ȭ 
	char code2 = 65; //�ƽ�Ű �ڵ�� �ʱ�ȭ

	printf("code1 = %c\n", code1);
	printf("code2 = %c\n", code2);

	return 0;
}
*/
