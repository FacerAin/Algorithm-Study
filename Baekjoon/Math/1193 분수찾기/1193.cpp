//1193번 분수찾기
#include <iostream>
using namespace std;
int main()
{
    int X;
    cin >> X;
    int cnt = 1;
    int tmp = 1;
    int cum = 1;
    int a = 1;
    int b = 1;
    while (1)
    {
        if (tmp % 2 == 0 && cnt == 1)
        {
            b = tmp;
            a = 1;
        }
        else if (cnt == 1)
        {
            a = tmp;
            b = 1;
        }

        if (cum == X)
        {
            cout << a << '/' << b;
            break;
        }
        cnt++;

        if (cnt > tmp)
        {
            tmp++;
            cnt = 1;
        }
        if (tmp % 2 == 0)
        {
            a++;
            b--;
        }
        else
        {
            a--;
            b++;
        }
        cum++;

        cout << tmp;
    }
    return 0;
}