//9465번 스티커
//max에 인자 3개를 넘기는 방법은? 배열로 넘기기!
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int T;
    cin >> T;
    int n;
    int A[100001][2];
    int dp[100001][3];
    while (T--)
    {
        cin >> n;
        A[0][0] = 0;
        A[0][1] = 0;
        dp[0][0] = 0;
        dp[0][1] = 0;
        dp[0][2] = 0;
        //dp[0][0] = dp[0][1] = dp[0][2] = 0으로도 기술 가능

        for (int i = 1; i <= n; i++)
        {
            cin >> A[i][0];
        }
        for (int i = 1; i <= n; i++)
        {
            cin >> A[i][1];
        }
        for (int i = 1; i <= n; i++)
        {
            dp[i][0] = 0;
            dp[i][1] = 0;
            dp[i][2] = 0;
            dp[i][0] = max({dp[i - 1][0], dp[i - 1][1], dp[i - 1][2]});
            dp[i][1] = max(dp[i - 1][2], dp[i - 1][0]) + A[i][0];
            dp[i][2] = max(dp[i - 1][1], dp[i - 1][0]) + A[i][1];
        }
        cout << max({dp[n][0], dp[n][1], dp[n][2]})<<'\n';
    }
    return 0;
}