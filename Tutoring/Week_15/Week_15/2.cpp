#include<iostream>
#include<algorithm>
using namespace std;

int dp[100001][3] = { 0, };

int main()
{
	int N = 0;
	cin >> N;
	for (int i = 1; i <= N; i++)
	{
		int x = 0, y = 0, z = 0;
		cin >> x >> y >> z;
		dp[i][0] = max(dp[i - 1][1], dp[i - 1][2]) + x;
		dp[i][1] = max(dp[i - 1][0], dp[i - 1][2]) + y;
		dp[i][2] = max(dp[i - 1][0], dp[i - 1][1]) + z;
	}
	int max = 0;
	for (int i = 0; i < 3; i++)
	{
		if (max < dp[N][i])
			max = dp[N][i];
	}
	cout << max;

	return 0;
}