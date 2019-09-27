//11724번 연결 요소의 개수
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;
bool check[10001];
vector<int> v[10001];
void dfs(int node)
{
    check[node] = true;
    int len = v[node].size();
    for (int i = 0; i < len; i++)
    {
        if (check[v[node][i]] == false)
            dfs(v[node][i]);
    }
}
int main()
{
    int n, m;
    int ans = 0;
    scanf("%d %d", &n, &m);
    for (int i = 0; i < m; i++)
    {
        int a, b;
        scanf("%d %d", &a, &b);
        v[a].push_back(b);
        v[b].push_back(a);
    }
    for (int i = 1; i <= n; i++)
    {
        sort(v[i].begin(), v[i].end());
    }
    for(int i =1; i <= n; i++){
        if(check[i]==false){
            ans++;
            dfs(i);
        }
    }
    printf("%d",ans);
    return 0;
}