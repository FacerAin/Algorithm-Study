/*
15665번 N과 M(11)
*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int N, M;
bool check[9] = {
    false,
};
int lst[8];
vector<int> v;
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
          for (int i = 0; i < N; i++)
          {
               if (i < 1 || v[i - 1] != v[i] || check[i - 1])

               {

                    check[i] = true;
                    lst[cnt] = v[i];
                    dfs(cnt + 1);
                    check[i] = false;
               }
          }
     }
}
int main()
{

     int num;
     cin >> N >> M;
     for (int i = 0; i < N; i++)
     {
          cin >> num;
          v.push_back(num);
          sort(v.begin(), v.end());
     }
     dfs(0);
     return 0;
}