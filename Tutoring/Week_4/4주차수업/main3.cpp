#include <iostream>
#include <time.h>
using namespace std;

//for문, 스왑을 이용한 셔플

int main()
{
	//난수 기준 만들기(시간을 기준삼는다)
	srand(time(NULL));

	//스왑 설명
	int a = 1;
	int b = 2;

	int temp;
	temp = a;	//빈그릇에 a를 옮겨놓은후
	a = b;		//a에 b값을 담는다
	b = temp;	//빈그릇에 있던값을 b에 넣는다.
	//->a와 b의 값이 바뀐다.
	//////////////
	
	//셔플 
	//덱 셔플 (카드섞기)
	int Deck[45]; //45장 카드
	for (int i = 0; i < 45; i++)
	{
		Deck[i] = i + 1;
	}

	//셔플 알고리즘
	for (int i = 0; i < 1000; i++)
	{
		//랜덤한 두장을 뽑는다.
		int dest = rand() % 45; //랜덤한 인덱스
		int sour = rand() % 45;

		//스왑
		int temp = Deck[sour];
		Deck[sour] = Deck[dest];
		Deck[dest] = temp;
	}

	for (int i = 0; i < 7; i++)
	{
		cout << Deck[i] << endl;
	}

	return 0;//메인함수 끝
}//main  함수영역 끝
