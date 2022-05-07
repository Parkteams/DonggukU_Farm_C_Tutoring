#include<iostream>
#include <time.h> //시간을 이용한 난수 생성 헤더파일
using namespace std;

//이중 for문을 이용한 로또번호생성기, 7자리의 겹치지않는 1~45숫자를 랜덤하게 출력
int main()
{
	srand(time(NULL));
	//난수 생성기

	int Lotto[7] = {0};	//전체 0으로 초기화
	Lotto[0] = rand() % 45 + 1; //첫번째 로또함수 설정
	for (int i = 1; i < 7; i++)
	{
		for (int j = 0; j < i; j++)
		{
			Lotto[i] = rand() % 45 + 1;
			if (Lotto[j] == Lotto[i])	//값이 같으면 다시 구하기
			{
				j--;  //j값을 1만큼 줄임
			}
		}//j++
	}//i++

	for (int i = 0; i < 7; i++)
	{
		cout << Lotto[i] << " ";
	}
	return 0;
}

//////////////