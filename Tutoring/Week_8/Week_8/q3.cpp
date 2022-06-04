#include<iostream>
using namespace std;

int N = 0;
int answer = 0;

int main()
{
	cin >> N;
	for (int i = 0; i <= (N / 3); i++)
	{
		for (int j = 0; j <= (N / 5); j++)
		{
			if ((3 * i + j * 5) == N)
			{
				answer = i + j;
				cout << answer;
				return 0;
			}
		}
	}
	if (answer == 0) cout << -1;


	return 0;
}