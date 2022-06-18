#include<iostream>
using namespace std;

int arr[8] = { 0 };
int visit[8] = { 0 };

void dfs(int x, int M, int N)
{
	if (x == M)
	{
		for (int i = 0; i < M; i++)
		{
			cout << arr[i] << " ";
		}
		cout << endl;
	}
	for (int i = 0; i < N; i++)
	{
		if (visit[i] == 0)
		{
			arr[x] = i + 1;
			visit[i] = 1;
			dfs(x + 1, M, N);
			arr[x] = 0; //backtraking
			visit[i] = 0; //backtracking
		}
	}
}

int main() {
	int M = 0, N = 0;

	cin >> N >> M;
	if (M<0 or M>N) return 0;
	if (N < M or N>8) return 0;

	dfs(0, M, N);

	return 0;
}