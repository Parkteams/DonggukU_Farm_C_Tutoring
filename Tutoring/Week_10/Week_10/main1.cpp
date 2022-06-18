#include<iostream>
using namespace std;

int arr[500][500] = { 0, };
int arr_2[500][500] = { 0, };
int ans[500] = { 0 };
int Count = 0;
void dfs_big(int y, int Num)
{
	for (int i = 0; i < Num; i++)
	{
		if (arr[y][i] == 1 and ans[i] == 0)
		{
			ans[i] = 1;
			Count++;
			dfs_big(i, Num);
		}
	}
}
void dfs_small(int y, int Num)
{
	for (int i = 0; i < Num; i++)
	{
		if (arr_2[y][i] == 1 and ans[i] == 0)
		{
			ans[i] = 1;
			Count++;
			dfs_small(i, Num);
		}
	}
}

int main() {
	int Num = 0, line = 0;
	cin >> Num >> line;
	int* arr_y = new int[line];
	int* arr_x = new int[line];
	for (int i = 0; i < line; i++)
	{
		cin >> arr_y[i] >> arr_x[i];
		arr[arr_y[i] - 1][arr_x[i] - 1] = 1;
		arr_2[arr_x[i] - 1][arr_y[i] - 1] = 1;
	}

	int Answer = 0;
	for (int i = 0; i < Num; i++)
	{
		Count = 0;
		dfs_big(i, Num);
		dfs_small(i, Num);
		if (Count == Num - 1) Answer++;
		for (int i = 0; i < Num; i++)
		{
			ans[i] = 0;
		}
	}
	cout << Answer;

	delete[] arr_y;
	delete[] arr_x;
	return 0;
}