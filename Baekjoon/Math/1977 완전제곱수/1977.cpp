#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int M, N;
    int sum = 0;
    cin >> M;
    cin >> N;
    M = ceil(sqrt(M));
    N = floor(sqrt(N));
    for (int i = M; i <= N; i++)
    {
        sum += i * i;
    }
    if (sum)
    {
        cout << sum << '\n';
        cout << M * M;
    }
    else
    {
        cout << -1 << '\n';
    }

    return 0;
}