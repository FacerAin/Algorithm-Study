/*
소수점 계산의 오차를 줄이는 법은?
굳이 제곱근을 해야할까?
*/

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    long long x1, y1, r1, x2, y2, r2;
    int T;
    cin >> T;
    while (T--)
    {
        cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
        long long dist = ((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));

        if (dist == 0)
        {
            if (r1 == r2)
            {
                cout << "-1" << endl;
            }
            else
            {
                cout << "0" << endl;
            }
        }
        else if (dist == (r1 + r2) * (r1 + r2) || dist == (r1 - r2) * (r1 - r2))
        {
            cout << "1" << endl;
        }
        else if ((r1 + r2) * (r1 + r2) > dist && (r1 - r2) * (r1 - r2) < dist)
        {
            cout << "2" << endl;
        }
        else
        {
            cout << "0" << endl;
        }
    }

    return 0;
}