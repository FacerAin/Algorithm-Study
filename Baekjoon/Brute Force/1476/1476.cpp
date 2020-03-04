#include <iostream>
using namespace std;
int main()
{
    int E, S, M;
    int e = 1;
    int s = 1;
    int m = 1;
    int cnt = 1;
    cin >> E >> S >> M;
    while (1)
    {
        if (e > 15)
            e = 1;
        if (s > 28)
            s = 1;
        if (m > 19)
            m = 1;
        if (e == E && s == S && m == M)
        {
            cout << cnt << endl;
            return 0;
        }
        e++;
        s++;
        m++;
        cnt++;
    }
}