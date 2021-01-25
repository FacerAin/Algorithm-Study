#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

vector<vector<int>> check(25, vector<int>(25));
vector<vector<int>> map(25, vector<int>(25));
vector<int> countv;
int cnt = 0;
int N;
void dfs(int i, int j)
{
    check[i][j] = 1;
    cnt += 1;

    if (i + 1 < N && map[i + 1][j] == 1 && check[i + 1][j] == 0) //го
    {
        dfs(i + 1, j);
    }
    if (i - 1 >= 0 && map[i - 1][j] == 1 && check[i - 1][j] == 0) //╩С
    {
        dfs(i - 1, j);
    }
    if (j + 1 < N && map[i][j + 1] == 1 && check[i][j + 1] == 0) //©Л
    {
        dfs(i, j + 1);
    }
    if (j - 1 >= 0 && map[i][j - 1] == 1 && check[i][j - 1] == 0) //аб
    {
        dfs(i, j - 1);
    }
}

int main()
{
    cin >> N;
    int num;
    string s;
    for (int i = 0; i < N; i++)
    {
        cin >> s;
        for (int j = 0; j < N; j++)
        {
            map[i][j] = (int)(s[j] - '0');
            check[i][j] = 0;
        }
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (map[i][j] == 1 && check[i][j] == 0)
            {
                cnt = 0;
                dfs(i, j);
                countv.push_back(cnt);
            }
        }
    }

    sort(countv.begin(), countv.end());
    cout << countv.size() << endl;
    for (auto item : countv)
    {
        cout << item << '\n';
    }

    return 0;
}