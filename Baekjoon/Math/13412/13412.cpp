/*
13412번
서로소 쌍
*/

#include <iostream>
using namespace std;

int gcd(int a, int b)
{
    return a % b == 0 ? b : gcd(b, a % b);
}

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int num;
        int cnt = 0;
        cin >> num;
        for (int i = 1; i <= num / i; i++)
        {
            if (num % i == 0)
            {
                if (gcd(i, num / i) == 1)
                {
                    cnt++;
                }
            }
        }
        cout << cnt << '\n';
    }
    return 0;
}