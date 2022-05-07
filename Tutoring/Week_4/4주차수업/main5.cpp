#include<iostream>
#include<string.h>
#include<time.h> //시간을 이용한 난수 생성 헤더 파일
using namespace std;

//트럼프카드 출력, 구조체이용
//트럼프카드 문양4개 ㅁ한자 이용

int main()
{
	srand(time(NULL));

	//문자열 char*, char[]
	//문자열 string
	
	int deck[52] = { 0 };
	for (int i = 0; i < 52; i++)
	{
		deck[i] = i; //0~51
	}

	//구조체
	//구조체 선언, 구조체이름
	struct CARD
	{
		//멤버
		int number;		//정수형 멤버변수
		string shape;	//문자열형 멤버변수
	};

	//배열 왜쓰지?
	//똑같은이름의 변수를 번호를매겨서 쓰려고
	//편하게 많이 만들라고

	//구조체는
	//멤버만큼 가지고 있는 덩어리를 한번에 많이 만들라고 씁니다

	//구조체 변수 선언
	struct CARD deck2[52]; //객체 배열 선언
	struct CARD card3;		//객체 선언

	for (int i = 0; i < 52; i++)
	{
		deck2[i].number = i % 13 + 1; //1~13

		switch (i / 13)
		{
		case 0:
			//멤버호출
			deck2[i].shape = "◆";
			break;
		case 1:
			//멤버호출
			deck2[i].shape = "♥";
			break;
		case 2:
			//멤버호출
			deck2[i].shape = "♠";
			break;
		case 3:
			//멤버호출
			deck2[i].shape = "♣";
			break;
		}
		cout << deck2[i].shape << deck2[i].number << endl;
	}

	return 0;
}