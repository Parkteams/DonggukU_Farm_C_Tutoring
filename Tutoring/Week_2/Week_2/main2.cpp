//수식과 연산자
//수식: 피연산자들과 연산자의 조합
//연산자: 연산기호
//피연산자: 연산의 대상

//산술 연산자
//덧셈 +
//뺄셈 - 
//곱셈 *
// 나눗셈 /
// 나머지 %
// 1번

//부호 연산자 -> 변수나 상수의 부호
//증감 연산자-> ++,--
//2번

//대입 연산자-> = -> =기준 왼쪽이 오른쪽이다.
//복합 대입 연산자-> +=,-= 등 -> 소스를 간결하게 만들 수 있다
//관계 연산자-> 두 개의 피연산자를 비교하는데 사용 -> 결과: true, false
//==, !=, >, <, >=, <=
//3번

//논리 연산자-> 여러 개의 조건을 조합-> 결과: true,false
//&&-> and
//||-> or
//!-> not

//콤마 연산자-> 수식을 콤마로 연결할 수 있다.

//비트 연산자
//&,|,^,<<,>>,~

//형변환
//자동적인 형변환(대입연산시, 정수연산시, 수식연산시)
//대입연산시-> 오른쪽에 있는 값은 왼쪽에 있는 변수의 자료형으로 자동적으로 변환된다.(올림변환, 내림변환)
//정수연산시-> char형이나 short형이 수식에 등장하면 자동적으로 연산시 int형으로 됨
//수식연산시-> 서로 다른 자료형이 수식에서 사용되면 모든 자료형은 그중에서 가장 높은 등급의 자료형으로 자동변환됨
//int->unsigned int-> long -> unsigned long->float->double->long double :오른쪽일수록 높은 등급

//명시적인 형변환
//->캐스트 연산자
//원하는 자료형을 괄호 안에 넣고 상수나 변수 앞에 적어주면 된다.

//연산자의 우선순위
//콤마 < 대입 < 논리 < 관계 < 산술 < 단항
//헷갈릴때(), () 우선순위 높음



//1번
/*
#include <stdio.h>

int main()
{
    int x, y, result;

    printf("두개의 정수를 입력하시오: ");
    scanf("%d %d", &x, &y);

    result = x + y;		// 덧셈 연산을 하여서 결과를 result에 대입
    printf("%d + %d = %d\n", x, y, result);

    result = x - y;		// 뺄셈 연산
    printf("%d - %d = %d\n", x, y, result);

    result = x * y;		// 곱셈 연산

    printf("%d + %d = %d\n", x, y, result);


    result = x / y;		// 나눗셈 연산
    printf("%d / %d = %d\n", x, y, result);

    result = x % y;		// 나머지 연산
    printf("%d %% %d = %d\n", x, y, result);
    return 0;
}
*/

//2번
/*
#include <stdio.h>
int main(void)
{
    int x=10, y=10;

    printf("x=%d\n", x);
    printf("++x의 값=%d\n", ++x);
    printf("x=%d\n\n", x);

    printf("y=%d\n", y);
    printf("y++의 값=%d\n", y++);
    printf("y=%d\n", y);

    return 0;
}
*/

//3번
/*
#include <stdio.h>

int main(void)
{
    int x, y;


    printf("두개의 정수를 입력하시오: ");
    scanf("%d%d", &x, &y);

    printf("x == y의 결과값: %d\n", x == y);
    printf("x != y의 결과값: %d\n", x != y);
    printf("x > y의 결과값: %d\n", x > y);
    printf("x < y의 결과값: %d\n", x < y);
    printf("x >= y의 결과값: %d\n", x >= y);
    printf("x <= y의 결과값: %d\n", x <= y);

    return 0;
}
*/
