#include <iostream>
#include <queue>
using namespace std;

struct tomato
{
    int y;
    int x;
};
queue<tomato> q;

int dx[4] = { 0, 0, 1, -1 };
int dy[4] = { 1, -1, 0, 0 };

int n, m, result = 0;

bool IsInside(int ny, int nx) {
    return (0 <= nx && 0 <= ny && nx < m&& ny < n);
}

void bfs(int**& graph)
{
    while (!q.empty())
    {
        int y = q.front().y;
        int x = q.front().x;
        q.pop();
        for (int i = 0; i < 4; i++) {
            int ny = y + dy[i];
            int nx = x + dx[i];
            if (IsInside(ny, nx) == 1 && graph[ny][nx] == 0) {
                graph[ny][nx] = graph[y][x] + 1;
                q.push({ ny, nx });
            }
        }
    }
}

int main()
{
    cin >> n >> m;
    int** graph = new int* [n];
    for (int i = 0; i < n; i++)
    {
        graph[i] = new int[m];
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> graph[i][j];
            if (graph[i][j] == 1)
                q.push({ i, j });
        }
    }

    bfs(graph);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (graph[i][j] == 0) {
                cout << "-1" << endl;
                return 0;
            }
            if (result < graph[i][j]) {
                result = graph[i][j];
            }
        }
    }
    cout << result - 1;
    for (int i = 0; i < n; i++)
    {
        delete[] graph[i];
    }
    delete[] graph;
    return 0;
}
