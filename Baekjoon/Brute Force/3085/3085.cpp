/*
#include <iostream>
#include <algorithm>
using namespace std;
char map[51][51];
int N;

int main()
{

    char c1, c2;
    int ans_cnt, ans_max = 0;
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
            ans_cnt = 0;
            for (int k = 0; k < N - 1; k++)
            {
                if (map[i][k] == map[i][k + 1])
                {
                    ans_cnt++;
                }
            }
            max(ans_cnt, ans_max);
            ans_cnt = 0;
            for (int k = 0; k < N - 1; k++)
            {

                if (map[k][j] == map[k + 1][j])
                {
                    ans_cnt++;
                }
            }
            max(ans_cnt, ans_max);
            ans_cnt = 0;
            for (int k = 0; k < N - 1; k++)
            {
                if (map[k][j + 1] == map[k + 1][j + 1])
                {
                    ans_cnt++;
                }
            }
            max(ans_cnt, ans_max);
            swap(map[i][j], map[i][j + 1]);
        }
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N - 1; j++)
        {
            swap(map[i][j], map[i + 1][j]);
            ans_cnt = 0;
            for (int k = 0; k < N - 1; k++)
            {
                if (map[i][k] == map[i][k + 1])
                {
                    ans_cnt++;
                }
            }
            max(ans_cnt, ans_max);
            ans_cnt = 0;
            for (int k = 0; k < N - 1; k++)
            {

                if (map[i + 1][k] == map[i + 1][k + 1])
                {
                    ans_cnt++;
                }
            }
            max(ans_cnt, ans_max);
            ans_cnt = 0;
            for (int k = 0; k < N - 1; k++)
            {
                if (map[k][j] == map[k + 1][j])
                {
                    ans_cnt++;
                }
            }
            max(ans_cnt, ans_max);
            swap(map[i][j], map[i + 1][j]);
        }
    }
    cout << ans_max;
    return 0;
}
*/