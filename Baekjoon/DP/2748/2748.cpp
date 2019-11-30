#include <iostream>
using namespace std;
long long memo[100];
long long Fibo(int N)
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
int main()
{
    int num;
    cin >> num;
    cout << Fibo(num + 1);
    return 0;
}