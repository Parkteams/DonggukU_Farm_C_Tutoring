#include<iostream>
using namespace std;

int Num = 0;
int kg[51] = { 0 };
int height[51] = { 0 };
int Count[51] = { 0 };

int main()
{
	cin >> Num;
	for (int i = 1; i <= Num; i++)
	{
		cin >> kg[i] >> height[i];
	}

	for (int i = 1; i <= Num; i++)
	{
		for (int j = 1; j <= Num; j++)
		{
			if (kg[i] < kg[j] and height[i] < height[j]
				and i != j)
			{
				Count[i]++;
			}
		}
		cout << Count[i] + 1 << " ";
	}


	return 0;
}