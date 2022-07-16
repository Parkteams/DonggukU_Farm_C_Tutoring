#include<iostream>
#include<algorithm>
using namespace std;

int n = 0, c = 0;

bool check(int x, int* dx)
{
	int now = dx[0];
	int count = 1;
	for (int i = 1; i < n; i++)
	{
		if (dx[i] >= now + x)
		{
			now = dx[i];
			count++;
		}
	}
	if (count >= c)
		return true;
	else
		return false;
}

int main()
{
	cin >> n >> c;
	int* dx = new int[n];
	for (int i = 0; i < n; i++)
		cin >> dx[i];
	sort(dx, dx + n);
	/*for(int i=0;i<n;i++)
	{
		for(int j=0;j<n-1-i;j++)
		{
			if(dx[j]>dx[j+1])
			{
				int temp = dx[j];
				dx[j] = dx[j+1];
				dx[j+1] = temp;
			}
		}
	}*/

	int l = 1;
	int r = dx[n - 1] - dx[0];
	while (l < r)
	{
		int mid = (l + r + 1) / 2;
		if (check(mid, dx))
			l = mid;
		else
			r = mid - 1;
	}
	cout << l;

	delete[] dx;
	return 0;
}