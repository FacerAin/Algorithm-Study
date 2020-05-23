#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
int main()
{
    int T;
    int M, N, x, y;
    int a, b;
    cin >> T;
    while (T--)
    {
        cin >> M >> N >> x >> y;
        int cnt = 1;
        int sub = M - N;
        bool ans = false;
        a = 1;
        b = 1;
        int iter_num = max(M, N);
        while (1)
        {
            if (a == x)
            {
                break;
            }
            cnt++;
            a++;
            b++;
            if (a > M)
            {
                a = 1;
            }
            if (b > N)
            {
                b = 1;
            }
        }
        for (int i = 0; i < iter_num; i++)
        {
            cout << a << ' ' << b << ' ';
            if (y == b)
            {
                cout << a << ' ' << b << ' ';
                cout << cnt << '\n';
                ans = true;
                break;
            }
            cnt += M;
            if (b + sub > N)
            {
                b = b + sub % N;
            }
            else if (b + sub <= 0)
            {
                b = N % abs(b + sub);
            }
            else
            {
                b += sub;
            }
        }
        if (ans == false)
        {
            cout << -1 << '\n';
        }
    }
    return 0;
}