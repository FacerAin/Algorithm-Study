/*
15652번 N과 M(4)
*/
#include <iostream>
using namespace std;
int N, M;
bool check[9] = {
    false,
};
int lst[8];

void dfs(int cnt)
{
     if (cnt == M)
     {
          for (int i = 0; i < M; i++)
          {
               cout << lst[i] << " ";
          }
          cout << '\n';
     }
     else
     {
          for (int i = 1; i <= N; i++)
          {
               if (cnt < 1 || lst[cnt - 1] <= i)
               {
                    check[i] = true;
                    lst[cnt] = i;
                    dfs(cnt + 1);
                    check[i] = false;
               }
          }
     }
}
int main()
{
     cin >> N >> M;
     dfs(0);
     return 0;
}