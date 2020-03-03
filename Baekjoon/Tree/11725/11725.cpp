#include <iostream>
#include <vector>
#include <queue>
#define MAX 100001
using namespace std;
vector<vector<int>> T;
bool check[MAX];
int parent[MAX];
int N;
queue<int> q;
void bfs(int x)
{
    check[x] = true;
    q.push(x);
    while (!q.empty())
    {
        int y = q.front();
        q.pop();
        for (int i = 0; i < T[y].size(); i++)
        {
            int z = T[y][i];
            if (check[z] == false)
            {
                parent[z] = y;
                check[z] = true;
                q.push(z);
            }
        }
    }
}
int main()
{
    int a, b;
    cin >> N;
    T.resize(N + 1);
    for (int i = 0; i < N - 1; i++)
    {
        cin >> a >> b;
        T[a].push_back(b);
        T[b].push_back(a);
    }
    bfs(1);
    for (int i = 2; i <= N; i++)
    {
        cout << parent[i] << '\n';
    }

    return 0;
}