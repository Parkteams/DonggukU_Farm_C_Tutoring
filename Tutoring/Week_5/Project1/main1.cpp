#include<iostream>
#include<time.h>
using namespace std;

//월남뽕게임  for, if, while 등 활용

int main()
{
	srand(time(NULL));

	//덱(화투 1~12 x 4)
	int deck[48];

	//소지금
	int money = 10000;

	//게임당 건너뛸 변수
	int GameCount = 0;

	//내가 베팅할 금액
	int bet = 0;

	for (int i = 0; i < 48; i++)
	{
		deck[i] = i % 12 + 1; //1~12
	}

	//셔플 알고리즘
	for (int i = 0; i < 1000; i++)
	{
		int dest = rand() % 48;
		int sour = rand() % 48;
		//스왑
		int temp = deck[dest];
		deck[dest] = deck[sour];
		deck[sour] = temp;
	}

	while (1)
	{
		cout << "월남뽕 게임" << endl;
		cout << "내 소지금: " << money << endl;
		//카드 두장 뽑은거를 출력
		cout << deck[GameCount * 3] << " " << deck[GameCount * 3 + 1] << endl;

		cout << "내 베팅금: ";
		//소지금이 0원인 경우
		if (money == 0)
		{
			cout << "돈이 부족합니다. " << endl;
			break;
		}

		cin >> bet;
		//소지금보다 베팅금이 많은지
		if (money < bet)
		{
			cout << "돈이 부족합니다" << endl;
			continue; //반복문 처음으로 돌아가기
		}
		//최소 베팅 금
		if (bet < 100)
		{
			cout << "100원 이상 베팅하세요" << endl;
			continue;
		}

		//돈이 부족하지 않은 경우
		cout << "히든카드: " << deck[GameCount * 3 + 2] << endl;

		//스왑 -> 작은카드가 더 앞에 오도록
		if (deck[GameCount * 3 + 0] > deck[GameCount * 3 + 1])
		{
			int temp = deck[GameCount * 3 + 1];
			deck[GameCount * 3 + 1] = deck[GameCount * 3 + 0];
			deck[GameCount * 3 + 0] = temp;
		}

		//이기는 경우
		if (deck[GameCount * 3 + 0] < deck[GameCount * 3 + 2] and deck[GameCount * 3 + 2] < deck[GameCount * 3 + 1])
		{
			cout << "이겼습니다" << endl;
			money += bet;
		}
		else
		{
			cout << "졌습니다" << endl;
			money -= bet;
		}

		//승부가 진행되면 카운트 증가
		GameCount++;

		//카드 소진
		if (GameCount == 16)
		{
			cout << "카드를 모두 소진하였습니다." << endl;
			break;
		}
		cout << endl;
	}


	return 0;
}