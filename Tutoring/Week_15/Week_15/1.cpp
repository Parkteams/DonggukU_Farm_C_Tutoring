#include<iostream>
using namespace std;

int dt[11] = { 0 };

int dx(int x)
{
	if (dt[x] != 0)
		return dt[x];
	if (x == 1)
		return 1;
	if (x == 2)
		return 2;
	if (x == 3)
		return 4;
	return dx(x - 3) + dx(x - 2) + dx(x - 1);
}

int main()
{
	int test = 0;
	cin >> test;
	for (int i = 0; i < test; i++)
	{
		int num = 0;
		cin >> num;
		for (int j = 0; j < 11; j++)
			dt[j] = 0;
		cout << dx(num) << endl;
	}

	return 0;
}