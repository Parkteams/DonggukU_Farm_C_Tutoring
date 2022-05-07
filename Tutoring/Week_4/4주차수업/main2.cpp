#include<iostream>
#include<time.h> //시간을 이용한 난수 생성 헤더 파일
using namespace std;

//가위 바위 보 게임, 결과까지 출력해주기

int main()
{
	srand(time(NULL)); //난수 생성기

	int Player = 0, Computer = 0, Result = 0;
	int Win_Count = 0 , Loose_Count = 0;

	bool isExit = true;

	while (isExit)
	{
		cout << "가위(0), 바위(1), 보(2), 나가기(나머지)" << endl;
		cout << "승: " << Win_Count << " " << "패: " << Loose_Count << endl;
		cin >> Player;
		if (Player != 0 and Player != 1 and Player != 2)
		{
			cout << "나가세요" << endl;
			break; //가장 최근 반복문 탈출
		}
		Computer = rand() % 3; //컴퓨터 값 생성 0~2

		switch (Player)
		{
		case 0:
			cout << "나: 가위" << "\t";
			break;
		case 1:
			cout << "나: 바위" << "\t";
			break;
		case 2:
			cout << "나: 보" << "\t";
			break;
		}

		switch (Computer)
		{
		case 0:
			cout << "컴퓨터: 가위" << "\t";
			break;
		case 1:
			cout << "컴퓨터: 바위" << "\t";
			break;
		case 2:
			cout << "컴퓨터: 보" << "\t";
			break;
		}

		if (Computer == Player) //비김
		{
			Result = 0;
		}
		else if ((Computer-Player)==1) //컴퓨터가 이김
		{
			Result = 1;
		}
		else if ((Computer==0) and (Player==2)) //컴퓨터가 이김
		{
			Result = 1;
		}
		else //플레이어가 이김
		{
			Result = 2;
		}

		///
		switch (Result)
		{
		case 0:
			cout << "비김" << "\t";
			break;
		case 1:
			cout << "컴퓨터가 이김" << "\t";
			Loose_Count++;
			break;
		case 2:
			cout << "플레이어가 이김" << "\t";
			Win_Count++;
			break;
		}

		cout << endl;
	}

	return 0;
}