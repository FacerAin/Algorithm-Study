#include <iostream>

using namespace std;

int memo[100];
int dp[100];
int Fibo(int N)
{
    dp[1] = 0;
    dp[2] = 1;
    for (int i = 3; i <= N; i++)
    {
        dp[i] = dp[i - 1] + dp[i - 2];
    }
    return dp[N];
}
/*Top Down
int Fibo(int N)
{
    if (N == 1)
    {
        return 0;
    }
    else if (N == 2)
    {
        return 1;
    }
    else
    {
        if (memo[N] > 0)
        {
            return memo[N];
        }
        memo[N] = Fibo(N - 1) + Fibo(N - 2);
        return memo[N];
    }
}
*/
int main()
{

    cout << Fibo(10);
    return 0;
}
