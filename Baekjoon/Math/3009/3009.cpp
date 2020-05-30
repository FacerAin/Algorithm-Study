/*
일단 축에 평행한 선분을 만들 수 있는 점 두개를 찾자. => How? 

그럼 끝.
*/

#include <iostream>
using namespace std;
int main()
{
    int x[3];
    int y[3];
    cin >> x[0] >> y[0];
    cin >> x[1] >> y[1];
    cin >> x[2] >> y[2];
    int diffx, diffy;
    if (x[0] == x[1])
    {
        diffx = x[2];
    }
    else if (x[0] == x[2])
    {
        diffx = x[1];
    }
    else
    {
        diffx = x[0];
    }

    if (y[0] == y[1])
    {
        diffy = y[2];
    }
    else if (y[0] == y[2])
    {
        diffy = y[1];
    }
    else
    {
        diffy = y[0];
    }

    cout << diffx << " " << diffy;
}