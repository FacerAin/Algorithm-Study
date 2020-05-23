#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;
bool num_check[10];
bool check(int num)
{
    while (num > 0)
    {
        if (!num_check[num % 10])
        {
            return false;
        }
        num /= 10;
    }
    return true;
}
int num_len(int num)
{
    int len = 0;
    if (num == 0)
    {

        if (num_check[0] == true)
        {
            return 1;
        }
        else
        {

            return 0;
        }
    }
    while (num > 0)
    {
        len++;
        num /= 10;
    }
    return len;
}
int main()
{
    int num;
    int M;
    cin >> num;
    cin >> M;
    int ans = 1000001;
    for (int i = 0; i < 10; i++)
    {
        num_check[i] = true;
    }
    for (int i = 0; i < M; i++)
    {
        int n;
        cin >> n;
        num_check[n] = false;
    }
    for (int i = 0; i < 1000001; i++)
    {
        if (check(i))
        {
            int len = num_len(i);

            if (len > 0)
            {

                if (ans > abs(i - num) + len)
                {
                    ans = abs(i - num) + len;
                }
            }
        }
    }
    cout << min(abs(num - 100), ans) << '\n';
    return 0;
}