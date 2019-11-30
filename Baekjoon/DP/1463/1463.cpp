//1463번 1로 만들기
//dp bottom-up
#include <iostream>
#include <algorithm>
using namespace std;
int dp[1000001];
int main()
{
    int N;
    cin >> N;
    for (int i = 2; i <= N; i++)
    {
        dp[i] = dp[i - 1] + 1;
        if (i % 2 == 0)
        {
            dp[i] = min(dp[i], dp[i / 2] + 1);
        }
        if (i % 3 == 0)
        {
            dp[i] = min(dp[i], dp[i / 3] + 1);
        }
    }
    cout << dp[N];
    return 0;
}

