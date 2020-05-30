#include <iostream>
#include <algorithm>
using namespace std;
/*IDEA
그냥 편하게 생각하자.

*/

int main()
{
    int x, y, w, h;
    cin >> x >> y >> w >> h;

    cout << min({x, y, w - x, h - y});

    return 0;
}