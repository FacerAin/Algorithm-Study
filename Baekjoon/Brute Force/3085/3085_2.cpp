#include <iostream>
#include <algorithm>
using namespace std;
char map[51][51];
int N;
int find_num()
{
    int ans = 1;
    for (int i = 0; i < N; i++)
    {
        int temp = 1;
        for (int j = 0; j < N - 1; j++)
        {
            if (map[i][j] == map[i][j + 1])
            {
                temp++;
            }
            else
            {
                ans = max(temp, ans);
                temp = 1;
            }
        }
        ans = max(temp, ans);
    }
    for (int i = 0; i < N; i++)
    {
        int temp = 1;
        for (int j = 0; j < N - 1; j++)
        {
            if (map[j][i] == map[j + 1][i])
            {
                temp++;
            }
            else
            {
                ans = max(temp, ans);
                temp = 1;
            }
        }
        ans = max(temp, ans);
    }
    return ans;
}
int main()
{
    int ans_max = 0;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cin >> map[i][j];
        }
    }
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N - 1; j++)
        {
            swap(map[i][j], map[i][j + 1]);
            ans_max = max(ans_max, find_num());
            swap(map[i][j], map[i][j + 1]);
            swap(map[j][i], map[j + 1][i]);
            ans_max = max(ans_max, find_num());
            swap(map[j][i], map[j + 1][i]);
        }
    }
    cout << ans_max << endl;
    return 0;
}