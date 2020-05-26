/*
에라토스테네스 체 구현에서 좀 더 큰수에서 효율적으로
잘 작동하게 어떻게 구현할 수 있을까?

*/

#include <iostream>
using namespace std;
int prime[250000];
int check[250001];
int pn = 0;
int n = 250000;
int main()
{
    for (int i = 2; i <= n; i++)
    {
        if (check[i] == false)
        {
            prime[pn++] = i;
            for (long j = i; j <= n; j += i)
            {
                check[j] = true;
            }
        }
    }

    int N;
    while (1)
    {
        int cnt = 0;
        cin >> N;
        if (N == 0)
        {
            break;
        }

        for (int i = 0; i < pn; i++)
        {
            if (prime[i] > 2 * N)
            {
                break;
            }
            else if (prime[i] > N)
            {

                cnt++;
            }
        }
        cout << cnt << endl;
    }

    return 0;
}