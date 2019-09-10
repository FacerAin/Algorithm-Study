//2522번 합분해
#include <iostream>
using namespace std;
int main()
{
    int N, K;
    cin >> N;
    cin >> K;
    long long dp[201][201];
    dp[0][0] = 1; 
    for (int i = 1; i <= K; i++)
    {
        for (int j = 0; j <= N; j++)
        {
            dp[i][j] = 0;
            for (int k = 0; k <= j; k++)
            {

                dp[i][j] += dp[i - 1][j - k];
                dp[i][j] %= 1000000000;
            }
        }
    }
    cout << dp[K][N];
    return 0;
}