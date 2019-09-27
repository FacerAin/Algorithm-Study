//1707번 이분 그래프
#include <cstdio>
#include <algorithm>
#include <vector>
using namespace std;
vector<int> a[20001];
int color[20001];
void dfs(int node, int c)
{
    color[node] = c;
    int len = a[node].size();
    for (int i = 0; i < len; i++)
    {
        if (color[a[node][i]] == 0)
        {
            dfs(a[node][i], 3 - c);
        }
    }
}
int main()
{
    int v, e;
    int T;
    scanf("%d", &T);
    while (T--)
    {
        scanf("%d %d", &v, &e);
        for(int i =1; i<=v;i++){
            a[i].clear();
            color[i] = 0;
        }
        for (int i = 0; i < e; i++)
        {
            int u, v;
            scanf("%d %d", &u, &v);
            a[u].push_back(v);
            a[v].push_back(u);
        }
        for (int i = 1; i <= v; i++)
        {
            sort(a[i].begin(), a[i].end());
        }
        for (int i = 1; i <= v; i++)
        {
            if (color[i] == 0)
                dfs(i, 1);
        }
        bool check = true;
        for (int i = 1; i <= v; i++)
        {
            int len = a[i].size();
            for (int j = 0; j < len; j++)
            {
                if (color[i] == color[a[i][j]])
                {
                    check = false;
                }
            }
        }
        printf("%s\n", check ? "YES" : "NO");
        
    }
    return 0;
}