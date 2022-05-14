#include "Trump.h" //해당 헤더의 내용을 포함한다.
//.h 헤더파일
//포함할 내용을 옮겨다 놓을수 있고 직접 만들어 포함시킬수 있다.

int sum(int a, int b)
{
	//매개변수를 선언하고 호출하여 함수를 부르면
	//int a = number1, int b = number2

	return a + b;
}

//평균값을 반환하는 함수를 만들기
float Avg(int a, int b, int c)
{
	return (a + b + c) / 3;
}

float Avg2(int a[], int size)
{
	int temp = 0; //지역변수
	for (int i = 0; i < size; i++)
	{
		temp += a[i];
	}
	return (float)temp / (float)size;
}

int main()
{
	//함수선언
	//반환형 함수이름(매개변수)

	//함수 호출
	//함수이름(매개변수)
	//호출하면 리턴값을 준다.

	int number1 = 3;
	int number2 = 4;

	number1 = sum(number1, number2);

	cout << number1 << endl;
	//number1 -> 7

	cout << Avg(number1, number2, 10) << endl;

	int number3[10];
	for (int i = 0; i < 10; i++)
	{
		number3[i] = i;
	}
	cout << Avg2(number3, 10) << endl;

	//함수는 어렵게 생각할거 없이
	//만든거 불러오는거고
	//호출했을때 그 리턴값을 받아온다.

	return 0;
}