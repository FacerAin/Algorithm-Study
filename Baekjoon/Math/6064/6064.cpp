//6064번 카잉 달력
//나머지 연산, 정수론
#include <iostream>
using namespace std;
int gcd(int a, int b)
{
    int c;
    while (b != 0)
    {
        c = a % b;
        a = b;
        b = c;
    }
    return a;
}
int lcm(int a, int b)
{
    return a * b / gcd(a, b);
}
int main()
{
    int T;
    int M, N, x, y;
    int x_cnt, y_cnt, cnt, status, sub;
    int lcm_num;
    cin >> T;
    while (T--)
    {
        cin >> M >> N >> x >> y;
        x_cnt = 1;
        y_cnt = 1;
        cnt = 1;
        status = 1;
        sub = N - M;
        lcm_num = lcm(M, N);
        while (1)
        {
            if (x_cnt == x)
            {
                break;
            }
            cnt++;

            x_cnt++;
            y_cnt++;
            if (x_cnt > M)
            {
                x_cnt = 1;
            }
            if (y_cnt > N)
            {
                y_cnt = 1;
            }
        }
        while (1)
        {
            if (y_cnt == y)
            {
                break;
            }
            y_cnt = (y_cnt + M)%N;
            if (lcm_num < cnt)
            {

                status = 0;
                break;
            }
            cnt += M;
        }
        if (status)
        {
            cout << cnt << '\n';
        }
        else
        {
            cout << -1 << '\n';
        }
    }
    return 0;
}