#include <iostream>
using namespace std;
int prime[10000];
int check[10001];
int pn = 0;
int n = 10000;

int main()
{
    int M, N;
    int min = 0;
    int sum = 0;
    cin >> M;
    cin >> N;
    for (int i = 2; i <= n; i++)
    {
        if (check[i] == false)
        {
            prime[pn++] = i;
            for (int j = i * i; j <= n; j += i)
            {
                check[j] = true;
            }
        }
    }

    for (int i = 0; i < pn; i++)
    {

        if (prime[i] > N)
        {
            break;
        }
        if (prime[i] >= M)
        {
            if (min == 0)
            {
                min = prime[i];
            }
            sum += prime[i];
        }
    }

    if (min == 0)
    {
        cout << "-1";
    }
    else
    {
        cout << sum << endl
             << min;
    }
    return 0;
}
