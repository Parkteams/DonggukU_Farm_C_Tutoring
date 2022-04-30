#include<stdio.h>
#include<iostream>
using namespace std;

int main()
{
	//배열
	//자료형 변수명[크기]
	//선언
	int number[6];
	//초기화
	for (int i = 0; i < 6; i++) number[i] = 0;
	//선언, 초기화
	int number2[6] = { 0 };

	//장점: 한번에 많이 생성할수 있습니다
	//단점: 런타임에러 발생할수 있다.

	// [인덱스] 방번호
	number[0] = 0;
	number[1] = 0;
	number[2] = 3;
	number[3] = 0;
	number[4] = 5;
	number[5] = 0;
	//number[6] = 0; 인덱스 호출을 틀리는 경우에 runtime에러

	//과제
	//1. 가위바위보 승부까지 알려주는 프로그램 만들기   힌트: if, else if, else 이용
	//2. 로또번호 생성기(로또 번호 총 몇개 할건지 입력받게하고, 무작위로 숫자 중복 안되게 출력)  힌트: 난수 발생, for문 이용

	//textechkr748@daum.net

	return 0;
}