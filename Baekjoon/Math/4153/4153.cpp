#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int a, b, c;
    int maxnum;
    while (1)
    {
        cin >> a >> b >> c;
        if (a == 0 && b == 0 && c == 0)
        {
            break;
        }
        maxnum = max({a, b, c});
        if (2 * maxnum * maxnum == a * a + b * b + c * c)
        {
            cout << "right" << endl;
        }
        else
        {
            cout << "wrong" << endl;
        }
    }
    return 0;
}