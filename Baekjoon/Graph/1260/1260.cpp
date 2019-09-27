//1260번 DFS와 BFS
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <queue>
#include <vector>
using namespace std;
bool check[1001];
vector<int> a[1001];
void dfs(int node)
{
    check[node] = true;
    printf("%d ", node);
    int len = a[node].size();
    for (int i = 0; i < len; i++)
    {
        if (check[a[node][i]] == false)
        {
            dfs(a[node][i]);
        }
    }
}
void bfs(int start)
{
    memset(check, false, sizeof(check));
    check[start] = true;
    queue<int> q;
    q.push(start);
    while (!q.empty())
    {
        int node = q.front();
        q.pop();
        printf("%d ", node);
        int len = a[node].size();
        for (int i = 0; i < len; i++)
        {
            int next = a[node][i];
            if (check[next] == false)
            {
                check[next] = true;
                q.push(next);
            }
        }
    }
}
int main()
{
    int n,m,start;
    scanf("%d %d %d",&n,&m,&start);
    for(int i =0;i < m;i++){
        int u,v;
        scanf("%d %d",&u,&v);
        a[v].push_back(u);
        a[u].push_back(v);
    }
    for(int i =0; i <=n; i++){
        sort(a[i].begin(),a[i].end());
    }
    dfs(start);
    printf("\n");
    bfs(start);
    printf("\n");
    return 0;
}