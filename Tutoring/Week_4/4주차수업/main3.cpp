#include<iostream>
#include<time.h> //시간을 이용한 난수 생성 헤더 파일
using namespace std;

//for문, 스왑을 이용한 셔플

int main()
{
	srand(time(NULL));

	//스왑 설명
	int a = 1;
	int b = 2;

	int temp;
	temp = a;
	a = b;
	b = temp;

	//셔풀
	//덱 셔플(카드섞기)
	int Deck[45] = {0};//45장의 카드
	for (int i = 0; i < 45; i++)
	{
		Deck[i] = i + 1;
	}

	//셔플 알고리즘
	for (int i = 0; i < 1000; i++)
	{
		//랜덤한 두장을 뽑는다.
		int dest = rand() % 45; //0부터 44의 무작위 값이 들어감
		int sour = rand() % 45; //0부터 44의 무작위 값이 들어감

		//스왑
		int temp = Deck[sour];
		Deck[sour] = Deck[dest];
		Deck[dest] = temp;
	}

	for (int i = 0; i < 7; i++)
	{
		cout << Deck[i] << endl;
	}


	return 0;
}