//10451번 순열 사이클
#include <iostream>
#include <vector>
using namespace std;
vector<int> v[1001];
bool check[1001];
void dfs(int node)
{
    if (check[node])
    {
        return;
    }
    check[node] = true;
    dfs(v[node][0]);
}
int main()
{

    int T;
    cin >> T;
    while (T--)
    {
        int N;
        int ans = 0;
        cin >> N;
        for (int i = 0; i < N; i++)
        {
            v[i + 1].clear();
            check[i + 1] = 0;
        }
        for (int i = 0; i < N; i++)
        {
            int num;
            cin >> num;
            v[i + 1].push_back(num);
        }
        for (int i = 0; i < N; i++)
        {
            if (check[i + 1] == false)
            {
                ans++;
                dfs(i + 1);
            }
        }
        cout << ans << '\n';
    }
    return 0;
}