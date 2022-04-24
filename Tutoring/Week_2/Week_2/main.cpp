//변수와 자료형
//변수와 상수
//변수:  사용자에게서 받는 데이터를 저장하는 장소, 한번 값이 저장되어도 언제든지 다른 값으로 변경 가능하다 예) int형으로 선언한 num
//상수:  한번 정해지면 프로그램이 실행되는 동안에 값이 변경되지 않는다. 예) 4
//1번

//자료형: 데이터의 종류 -정수형, 부동소수점형, 문자형
//정수형
//short				2byte		-32768 ~ 32768
//int				4byte		약 -21억 ~ 21억
//long				4byte		약 -21억 ~ 21억
//long long			8byte		매우 크다
//부동소수점형
//float
//double
//long double
//문자형이자 정수형
//char
//2번

//unsigned, signed 수식자
//unsigned를 붙이면 음수가 제외되어 더 넓은 범위의 양수를 나타낼수 있음
//signed는 자료형이 음수도 가질 수 있음을 명백히 하는데 사용 signed int = int
//오버플로우
//정수형 변수가 나타낼수 있는 정수의 범위가 제한되어 있어 변수가 나타낼 수 있는 범위를 넘는 숫자를 저장하려고 할때 발생할 수 있는 오버플로우가 발생할 수 있다.
//3번

//상수 -정수상수, 기호상수
//정수상수: 12, 100 같이 숫자로 표기
//기호상수: #define 문장 사용, const 키워드 사용
//#define EXCHANGE_RATE 1120
//컴파일러가 동작하기 전에 전처리기로 처리
//const int EXCHANGE_RATE = 1120
//선언시에 const가 붙여진 변수는 초기화된 후에 그 값이 변경될수 없다.
//4번

//부동 소수점형
//부동 소수점: 실수를 가수와 지수로 나누어서 표현-> 실수의 범위가 대폭 증가
//float		4byte		8bit 지수, 24bit 가수
//double	8byte		11bit 지수, 53bit 가수
//실수 출력 형식자 : %f
//부동 소수점 상수: 3.141592->double형 상수
//3.141592f -> float 상수
//정수 산술 연산과는 달리 정확하지 않은 경우가 많아서 오차가 발생하기 쉽다.
//float보다 double이 오차가 더 적다.

//문자형
//char형-> 아스키코드(128) + 확장 아스키코드(128,그래픽문자, 독일어)
//문자 상수: 작은 따옴표로 감싸진 문자  예)'A'
//5번


//1번
/*
#include<stdio.h>

int main(void)
{
	double radius;
	double area;  //radius, area -> 변수

	printf("원의 반지름을 입력하세요: ");
	scanf_s("%lf", &radius);
	area = radius * radius * 3.141592;
	//3.141592-> 상수
	printf("원의 면적: %f \n", area);

	return 0;
}
*/

//2번
/*
#include<stdio.h>

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

//3번
/*
#include<stdio.h>
#include<limits.h> //정수형의 한계를 알려주는 헤더파일

int main(void)
{
	short s_money = SHRT_MAX; //32767
	unsigned short u_money = USHRT_MAX; //65535

	s_money = s_money + 1; //오버플로우 발생
	printf("s_money = %d\n", s_money);

	u_money = u_money + 1; //오버플로우 발생
	printf("u_money = %d\n", u_money);

	return 0;

}
*/

//4번
/*#include<stdio.h>
#define TAX_RATE 0.2  //define을 이용한 기호상수 정의

int main(void)
{
	const int MONTHS = 12;  //const를 이용한 기호상수 정의
	int m_salary = 0, y_salary = 0;

	printf("월급을 입력하시오: ");
	scanf_s("%d", &m_salary);

	y_salary = MONTHS * m_salary;
	printf("연봉은 %d입니다.\n", y_salary);
	printf("세금은 %f입니다.\n", y_salary * TAX_RATE);


	return 0;
}
*/

//5번
/*
#include<stdio.h>

int main(void)
{
	char code1 = 'A'; //문자 상수로 초기화
	char code2 = 65; //아스키 코드로 초기화

	printf("code1 = %c\n", code1);
	printf("code2 = %c\n", code2);

	return 0;
}
*/
