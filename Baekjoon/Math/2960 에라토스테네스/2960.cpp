//2 4 6 8 10 12 3 6 9 5
#include <iostream>
using namespace std;
int N, K;
int main()
{
    int cnt = 0;
    ios_base ::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> N >> K;
    bool *prime = new bool[N + 1];
    bool *check = new bool[N + 1];
    prime[1] = false;
    for (int i = 2; i <= N; i++)
    {
        prime[i] = true;
        check[i] = false;
    }
    for (int i = 2; i <= N; i++)
    {
        if (prime[i] == true)
        {
            cnt++;
            if (check[i] == false)
            {
                check[i] = true;
                if (cnt == K)
                {
                    cout << i;
                    return 0;
                }
            }

            for (int j = i * i; j <= N; j += i)
            {
                if (check[j] == false)
                {
                    check[j] = true;
                    cnt++;
                    if (cnt == K)
                    {
                        cout << j;
                        return 0;
                    }
                }

                prime[j] = false;
            }
        }
    }
    delete[] prime;
    return 0;
}