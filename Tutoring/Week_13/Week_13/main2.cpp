#include<iostream>
#include<queue>
using namespace std;

int num = 0, A = 0, B = 0;
int isPrime[10001] = { 0, };
int dist[10001] = { 0, };

queue<int> q;

int main()
{
	cin >> num;
	for (int i = 2; i <= 100; i++)
	{
		if (isPrime[i] == 1) continue;
		for (int j = 2 * i; j < 10000; j += i)
			isPrime[j] = 1;
	}

	for (int k = 0; k < num; k++)
	{
		q = queue<int>();
		cin >> A >> B;
		if (A == B)
		{
			cout << "0" << endl;
			continue;
		}
		q.push(A);
		for (int i = 0; i < 10001; i++) dist[i] = 0;
		dist[A] = 1;
		while (!q.empty())
		{
			int x = q.front();
			q.pop();
			for (int i = 1; i < 10; i++)
			{
				int tmp = i * 1000 + (x % 1000);
				if (isPrime[tmp] == 0 and x != tmp)
				{
					if (dist[tmp] == 0)
					{
						dist[tmp] = dist[x] + 1;
						q.push(tmp);
					}
				}
			}
			for (int i = 0; i < 10; i++)
			{
				int tmp = (x / 1000) * 1000 + i * 100 + (x % 100);
				if (isPrime[tmp] == 0 and x != tmp)
				{
					if (dist[tmp] == 0)
					{
						dist[tmp] = dist[x] + 1;
						q.push(tmp);
					}
				}
			}
			for (int i = 0; i < 10; i++)
			{
				int tmp = (x / 100) * 100 + i * 10 + (x % 10);
				if (isPrime[tmp] == 0 and x != tmp)
				{
					if (dist[tmp] == 0)
					{
						dist[tmp] = dist[x] + 1;
						q.push(tmp);
					}
				}
			}
			for (int i = 0; i < 10; i++)
			{
				int tmp = (x / 10) * 10 + i;
				if (isPrime[tmp] == 0 and x != tmp)
				{
					if (dist[tmp] == 0)
					{
						dist[tmp] = dist[x] + 1;
						q.push(tmp);
					}
				}
			}
			if (x == B)
			{
				cout << dist[B] - 1 << endl;
				break;
			}
		}
	}


	return 0;
}