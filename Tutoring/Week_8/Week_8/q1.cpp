#include<iostream>
using namespace std;

int A = 0, B = 0, C = 0;
int in[3] = { 0 };
int out[3] = { 0 };
int times[101] = { 0 };
int money = 0;

int main()
{
	cin >> A >> B >> C;

	for (int i = 0; i < 3; i++)
	{
		cin >> in[i] >> out[i];
	}

	for (int i = 0; i < 3; i++)
	{
		for (int j = in[i]; j < out[i]; j++)
		{
			times[j]++;
		}
	}

	for (int i = 1; i <= 100; i++)
	{
		if (times[i] == 1) {
			money += A;
		}
		else if (times[i] == 2) {
			money += (B * 2);
		}
		else if (times[i] == 3) {
			money += (C * 3);
		}
	}
	cout << money;

	return 0;
}