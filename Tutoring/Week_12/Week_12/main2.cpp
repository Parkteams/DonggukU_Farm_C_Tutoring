#include<iostream>
#include<queue>
using namespace std;

struct XY
{
	int y;
	int x;
};
queue<XY> q_f;
queue<XY> q_m;

int dx[4] = { 0, 0, 1, -1 };
int dy[4] = { 1, -1, 0, 0 };

int num = 0, n = 0, m = 0, result = 0;

bool IsInside(int ny, int nx) {
	return (0 <= nx and 0 <= ny and ny < n and nx < m);
}

int main()
{
	cin >> num;
	for (int k = 0; k < num; k++)
	{
		while (!q_f.empty()) q_f.pop();
		while (!q_m.empty()) q_m.pop();
		result = 0;
		cin >> m >> n;
		int** graph_f = new int* [n];
		int** graph_m = new int* [n];
		char** map = new char* [n];
		for (int i = 0; i < n; i++)
		{
			graph_f[i] = new int[m];
			graph_m[i] = new int[m];
			map[i] = new char[m];
		}
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
			{
				graph_f[i][j] = 0;
				graph_m[i][j] = 0;
			}
		}
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
			{
				cin >> map[i][j];
				if (map[i][j] == '*')
				{
					graph_f[i][j] = 1;
					q_f.push({ i,j });
				}
				if (map[i][j] == '#')
				{
					graph_f[i][j] = -1;
					graph_m[i][j] = -1;
				}
				if (map[i][j] == '@')
				{
					graph_m[i][j] = 1;
					q_m.push({ i,j });
				}
			}
		}
		while (!q_f.empty())
		{
			int y = q_f.front().y;
			int x = q_f.front().x;
			q_f.pop();
			for (int i = 0; i < 4; i++) {
				int ny = y + dy[i];
				int nx = x + dx[i];
				if (IsInside(ny, nx) == 1 and graph_f[ny][nx] == 0)
				{
					graph_f[ny][nx] = graph_f[y][x] + 1;
					q_f.push({ ny, nx });
				}
			}
		}
		while (!q_m.empty())
		{
			int y = q_m.front().y;
			int x = q_m.front().x;
			q_m.pop();
			for (int i = 0; i < 4; i++) {
				int ny = y + dy[i];
				int nx = x + dx[i];
				if (IsInside(ny, nx) and graph_m[ny][nx] == 0
					and (graph_m[y][x] + 1 < graph_f[ny][nx] or graph_f[ny][nx] == 0))
				{
					graph_m[ny][nx] = graph_m[y][x] + 1;
					q_m.push({ ny, nx });
				}
				if (!IsInside(ny, nx))
				{
					result = graph_m[y][x];
				}
			}
			if (result != 0)
			{
				cout << result << endl;
				break;
			}
			if (q_m.empty())
			{
				cout << "IMPOSSIBLE" << endl;
				break;
			}
		}

		for (int i = 0; i < n; i++)
		{
			delete[] graph_f[i];
			delete[] graph_m[i];
			delete[] map[i];
		}
		delete[] graph_f;
		delete[] graph_m;
		delete[] map;
	}

	return 0;
}