#include <iostream>
using namespace std;

int main()
{
	//배열은 포인터다
	//인덱스는 첫주소로부터의 주소값 점프

	double a[10]; //a는 포인터 //[방갯수]

	for (int i = 0; i < 10; i++)
	{
		a[i] = i;
	}

	cout << a << endl;
	cout << *a << endl;
	cout << &(a[1]) << endl;
	cout << &(a[2]) << endl;
	cout << a + 1 << endl;
	cout << *(a + 1) << endl;

	//a는 항상 첫주소값을 담는다
	//*(a + 1) -> a[1]

	//배열은 연속된 컨테이너

	//동적배열
	int* c = new int[10];
	for (int i = 0; i < 10; i++)
	{
		c[i] = i;
	}

	//포인터가 하나여도 배열은 연속적인 값이라 하나로 접근가능
	cout << c[6] << endl;

	delete[] c;

	//문자열 -> 배열
	char str[] = "a가de"; //멀티바이트 문자열

	cout << str << endl;
	cout << str + 1 << endl;
	cout << str + 2 << endl;
	cout << str + 3 << endl;

	//string -> 포인터 아님

	//숙제
	char str1[] = "*****";
	char str2[] = "     ";
	//2개로 별찍기

	return 0;
}