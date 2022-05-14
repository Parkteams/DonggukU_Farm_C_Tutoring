#include "Trump.h"

int main()
{
	srand(time(NULL));

	init1(); //카드값 생성
	Shuffle1();

	int money = 10000;
	int input = 0, bet = 0, openCard = 0;
	int GameCount = 0;
	openCard = 10;

	while (1)
	{
		cout << "하이(1) 로우(2) 세븐(3) 게임" << endl;
		cout << "내 돈: " << money << endl;

		//카드를 openCard만큼 GameCount반영해서 출력
		Print2(openCard, GameCount);

		cout << "베팅금 입력: ";
		cin >> bet;
		if (bet > money)
		{
			cout << "돈이 부족합니다" << endl;
			continue;
		}
		else if (bet <= 0)
		{
			cout << "다시 베팅해주세요" << endl;
			continue;
		}

		cout << "하이 로우 세븐?";
		cin >> input;
		cout << "히든카드: " << Trump[(GameCount + 1) * openCard - 1].number << endl;

		switch (input)
		{
		case 1:
			if (Trump[(GameCount + 1) * openCard - 1].number > 7)
			{
				cout << "승리" << endl;
				money += bet;
			}
			else
			{
				cout << "패배" << endl;
				money -= bet;
			}
			break;
		case 2:
			if (Trump[(GameCount + 1) * openCard - 1].number < 7)
			{
				cout << "승리" << endl;
				money += bet;
			}
			else
			{
				cout << "패배" << endl;
				money -= bet;
			}
			break;
		case 3:
			if (Trump[(GameCount + 1) * openCard - 1].number == 7)
			{
				cout << "승리" << endl;
				money += bet*5;
			}
			else
			{
				cout << "패배" << endl;
				money -= bet;
			}
			break;
		default:
			cout << "잘못쳤습니다." << endl;
			return 0;
			break;
		}

		//게임횟수 증가
		GameCount++;

		if ((GameCount + 1) * openCard >= 52) //카드장수를 초과하는경우
		{
			cout << "카드가 다 떨어졌습니다 카드를 다시 섞습니다" << endl;
			Shuffle1();
			GameCount = 0;
		}

	}

	return 0;

}

//숙제
//만들었던 게임 3개중 아무거나 다시만들기(가위바위보(ai), 월남뽕게임, 하이로우세븐)
//약간 변형해서 만들기