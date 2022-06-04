#include<iostream>
using namespace std;

int N = 0, ans = 0;

int main()
{
	cin >> N;
	if (N < 3 or N>100) return 0;

	for (int i = 0; i <= N; i++)
	{
		for (int j = i; j <= N - i; j++)
		{
			int k = N - i - j;
			if (k < i + j and i + j + k == N and k >= j) ans++;
		}
	}

	cout << ans;

	return 0;
}