#include<stdio.h>

int main(void)
{
	/*int x; //int형(정수형) 변수 x를 선언
	int y; //int형(정수형) 변수 y를 선언
	int sum; //int형(정수형) 변수 sum을 선언

	x = 100; //변수 x를 초기화
	y = 200; //변수 y를 초기화*/

	//int x = 100, y = 200, sum = 0;
	//int 형으로 x,y,sum을 원하는 값으로 초기화함

	int x = 100;
	float y = 0.8;
	int z = 7;

	int sum = x + y;
	float sum2 = x + y;

	signed int divide = x / z;
	signed int remain = x % z;
	signed int multiple = x * z;

	//자료형: 변수가 저장할 데이터가 정수인지, 실수인지 이런거를 지정해준다.
	//자료형에는 정수형, 실수형, 문자형이 있다.
	//정수형: short, int(중요), long, long long(중요)
	//실수형: float(중요), double(중요), long double
	//signed, unsigned
	//1bit: 2가지의 경우
	//1byte(8bit): 2의 8승
	//4byte(32bit): 2의 32승 -> 2,147,483,647의 2배
	//signed int(=int,4byte)의 범위 -2,147,483,647 ~ 2,147,483,647(21억)
	//unsigned(양의 값만 취급) int의 범위 0 ~ 4,294,967,295(42억)
	//short: 2byte, int: 4byte, long: 4byte, long long: 8byte
	//float : 4byte, double: 8byte


	sum = x + y;
	//'=' : 오른쪽의 값을 왼쪽에 넣는다.
	//+: 수학에서 +
	//-: 수학에서 -
	//*: 수학에서 X
	// /: 수학에서 나눗셈에서 몫
	// %: 수학에서 나눗셈에서 나머지

	printf("두 수의 합: %d\n", sum);
	//%d: ,뒤에 있는 정수형의 값을 출력한다.
	printf("두 수의 합: %f\n", sum2);
	//%f: ,뒤에 있는 실수형의 값을 출력한다.
	printf("두 수의 나눗셈의 몫: %d\n", divide);
	printf("두 수의 나눗셈의 나머지: %d\n", remain);
	printf("두 수의 곱: %d", multiple);

	printf("%c", 'a');
	//%c: ,뒤에있는 문자를 출력한다
	//'': 문자 하나를 입력받을 수 있다
	printf("%s", "Hello World!");
	//%s: ,뒤에있는 문자열을 출력한다.
	//"": 문자열을 입력받을 수 있다

	

	return 0;
}

//주석: 프로그래밍에서 중요합니다
//프로그래밍의 가독성이 높아짐(팀플시 중요)
//혼자 작업해도 틈틈히 하자
//주석 하는 법
//1. //: 한줄만 허용   ->작성하면서 무시하기 좋음
//2. /*:시작   */:끝   ->한꺼번에 작성되어 있는 여러개 문장을 무시하기 좋음