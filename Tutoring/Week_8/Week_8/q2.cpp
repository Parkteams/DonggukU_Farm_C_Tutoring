#include<iostream>
#include<algorithm>
using namespace std;

int N = 0;
int in[1001] = { 0 };
int out[1001] = { 0 };
int person[1001] = { 0 }; //시간당 겹치는 라이프가드
int fire[100] = { 0 };  //어떤 사람 해고했을때 0이 아닌 시간담기

int main()
{
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> in[i] >> out[i];
	}
	for (int i = 0; i < N; i++)
	{
		for (int j = in[i]; j < out[i]; j++)
		{
			person[j]++;
		}
	}

	//각각 해고해보고 총 0의 숫자가 가장 적은거로
	for (int i = 0; i < N; i++)
	{
		//해고할 사람거 빼기
		for (int j = in[i]; j < out[i]; j++)
		{
			person[j]--;
		}
		//해고했을때 0이 아닌값 구하기
		for (int j = 1; j <= 1000; j++)
		{
			if (person[j] >= 1) fire[i]++;
		}

		//원상복귀
		for (int j = in[i]; j < out[i]; j++)
		{
			person[j]++;
		}
	}

	//fire[i]중에 최대값 구하기
	int Max = 0;
	for (int i = 0; i < N; i++)
	{
		Max = max(fire[i], Max);
	}

	cout << Max;

	return 0;
}