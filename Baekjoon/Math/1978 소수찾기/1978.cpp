#include <iostream>
using namespace std;
bool prime(int n)
{
    if (n < 2)
    {
        return false;
    }
    else
    {
        for (int i = 2; i * i <= n; i++)
        {
            if (n % i == 0)
            {
                return false;
            }
        }
        return true;
    }
}
int main()
{
    int T;
    int cnt = 0;
    cin >> T;
    while (T--)
    {
        int N;
        cin >> N;
        if (prime(N))
        {
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}