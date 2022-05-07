#include <iostream>
#include <string.h>
#include <time.h>
using namespace std;

//트럼프카드 출력, 구조체이용
//트럼프카드 문양4개 ㅁ한자 이용

int main()
{
	srand(time(NULL));

	// 문자열 char*, char[]
	// 문자열 string
	string shape = "◆";
	
	cout << shape << endl;

	/////////////////

	int deck[52] = {0};
	for (int i = 0; i < 52; i++)
	{
		deck[i] = i; // 0~ 51
	}

	/////////////////

	//구조체
	//구조체선언 구조체이름
	struct CARD
	{
		//멤버
		int number;		//정수형 멤버변수
		string shape;	//문자열형 멤버변수
	};

	//배열 왜쓰지?
	//똑같은이름의 변수를 번호를매겨서 쓰기위해
	//편하게 많이 만들라고

	//구조체는
	//멤버만큼 한번에 많이 만들려고 씀

	/////////////////
	 
	//구조체 변수 선언   (구조체 변수 -> 객체)
	struct CARD deck2[52]; //객체 배열
	struct CARD card3;		//객체

	//객체의 멤버값 초기화
	card3.number = 3;
	card3.shape = "A";

	/////////////////

	for (int i = 0; i < 52; i++)
	{
		//멤버호출 객체 .
		deck2[i].number = i % 13 + 1; //1~13

		switch ((int)(i / 13))
		{
		case 0:
			//멤버호출
			deck2[i].shape = "◆";
			break;
		case 1:
			deck2[i].shape = "♥";
			break;
		case 2:
			deck2[i].shape = "♠";
			break;
		case 3:
			deck2[i].shape = "♣";
			break;
		}
		cout << deck2[i].shape << deck2[i].number << endl;
	}

	/////////////////

	// 셔플을 사용할때

	//셔플 알고리즘
	for (int i = 0; i < 1000; i++)
	{
		int dest = rand() % 52; // 0~ 51
		int sour = rand() % 52;
		//스왑
		//받는 왼쪽값도 객체로 맞춰준다.
		struct CARD temp = deck2[dest]; //방번호 랜덤호출
		deck2[dest] = deck2[sour];
		deck2[sour] = temp;
	}
	//셔플 후 출력
	for (int i = 0; i < 52; i++)
	{
		cout << deck2[i].shape << deck2[i].number << endl;

	}

	/////////////////

	return 0;
}



