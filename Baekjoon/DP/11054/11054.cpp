//11054번 가장 긴 바이토닉 부분 수열
#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;
    int A[1001];
    int dp[1001];
    int dp2[1001];
    int MAX = 1;
    int temp = 0;
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }

    for (int i = 0; i < N; i++)
    {
        dp[i] = 1;
        for (int j = 0; j < i; j++)
        {
            if (A[i] > A[j] && dp[i] < dp[j] + 1)
            {
                dp[i] = dp[j] + 1;
            }
        }
    }
    for (int i = 0; i < N / 2; i++)
    {
        temp = A[i];
        A[i] = A[N - 1 - i];
        A[N - 1 - i] = temp;
    }
    for (int i = 0; i < N; i++)
    {
        dp2[i] = 1;
        for (int j = 0; j < i; j++)
        {
            if (A[i] > A[j] && dp2[i] < dp2[j] + 1)
            {
                dp2[i] = dp2[j] + 1;
            }
        }
    }

    for (int i = 0; i < N; i++)
    {
        if (dp[i] + dp2[N - i - 1] - 1 > MAX)
        {
            MAX = dp[i] + dp2[N - i - 1] - 1;
        }
    }
    cout << MAX;
    return 0;
}