#include<iostream>
using namespace std;

int main()
{
	int row = 0, col = 0;
	cin >> row >> col;
	if (col < 1 or col>50) return 0;
	if (row < 1 or row>50) return 0;
	char** arr = new char* [row];
	for (int i = 0; i < row; i++)
	{
		arr[i] = new char[col];
	}

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			cin >> arr[i][j];
		}
	}

	for (int j = 0; j < col; j++)
	{
		for (int i = row - 1; i >= 0; i--)
		{
			if (arr[i][j] == 'o')
			{
				if (i + 1 <= row - 1)
				{
					for (int k = i + 1; k < row; k++)
					{
						if (arr[k][j] == 'o' or
							arr[k][j] == '#')
						{
							arr[i][j] = '.';
							arr[k - 1][j] = 'o';
							break;
						}
						if (k == row - 1 and arr[k][j] == '.')
						{
							arr[i][j] = '.';
							arr[k][j] = 'o';
						}
					}

				}

			}
		}
	}

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			cout << arr[i][j];
		}
		cout << endl;
	}

	for (int i = 0; i < row; i++)
	{
		delete[] arr[i];
	}
	delete[] arr;

	return 0;
}