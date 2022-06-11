#include<iostream>
using namespace std;

int main() {
	int Num = 0;
	cin >> Num;
	if (Num < 1 or Num >100) return 0;
	int Count = 0;
	int Sum = 0;
	int Ave = 0;
	int* arr = new int[Num];
	for (int i = 0; i < Num; i++)
	{
		cin >> arr[i];
		if (arr[i] < 1 or arr[i]>1000) return 0;
	}
	for (int i = 0; i < Num; i++)
	{
		for (int j = i; j < Num; j++)
		{
			Ave = 0;
			Sum = 0;
			for (int k = i; k < j + 1; k++)
			{
				Sum += arr[k];
			}
			if (Sum % (j - i + 1) != 0) continue;
			Ave = Sum / (j - i + 1);
			for (int k = i; k < j + 1; k++)
			{
				if (arr[k] == Ave)
				{
					Count++;
					break;
				}
			}
		}
	}
	cout << Count;

	delete[] arr;
	return 0;
}