#include <iostream>
using namespace std;
int main()
{
    int N;
    int num;
    int sum = 0;
    cin >> N;
    for (int i = 0; i < 5; i++)
    {
        cin >> num;
        if (num == N)
        {
            sum++;
        }
    }
    cout << sum;
    return 0;
}