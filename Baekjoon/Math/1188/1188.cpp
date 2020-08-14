/*
1188번
음식 평론가
*/

#include <iostream>
using namespace std;
int main()
{
    int N, M;
    cin >> N >> M;
    if (N == 1)
    {
        cout << 0;
    }
    else if ((M - N) % N == 0)
    {
        cout << M - N;
    }
    else
    {
        cout << M - 1;
    }
    return 0;
}