#include <iostream>
using namespace std;
int N, M;
int main()
{
    ios_base ::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> M >> N;
    bool *prime = new bool[N + 1];
    prime[1] = false;
    for (int i = 2; i <= N; i++)
    {
        prime[i] = true;
    }
    for (int i = 2; i <= N; i++)
    {
        if (prime[i] == true)
        {
            for (int j = i * 2; j <= N; j += i)
            {
                prime[j] = false;
            }
        }
    }

    for (int i = M; i <= N; i++)
    {
        if (prime[i])
        {
            cout << i << '\n';
        }
    }
    delete[] prime;
    return 0;
}