#include<iostream>
using namespace std;
int n = 0, k = 0;
int arr[1000001] = { 0, };
int lower_bound(int n, int K)
{
	int l = 1;
	int r = n;
	while (l < r)
	{
		int mid = (l + r) / 2;
		if (arr[mid] < K)
		{
			l = mid + 1;
			if (mid >= n - 1)
			{
				return l + 1;
				break;
			}
		}
		else if (arr[mid] > K) r = mid;
		else if (arr[mid] == K) r = mid;
	}
	return l;
}

int main()
{
	cin >> n;
	for (int i = 1; i < n + 1; i++)
		cin >> arr[i];
	cin >> k;
	cout << lower_bound(n, k);
	return 0;
}