//1065번 한수
#include <iostream>
using namespace std;
bool deter_num(int n)
{
    int sub, tmp = 0;
    tmp = (n / 10) % 10 - n % 10;
    while (1)
    {
        sub = (n / 10) % 10 - n % 10;
        n /= 10;
        if (n == 0)
        {
            break;
        }
        if (tmp != sub)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int N, sum = 0;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        if (deter_num(i+1))
        {
            sum += 1;
        }
    }
    cout << sum << endl;
    return 0;
}