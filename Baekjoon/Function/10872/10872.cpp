//10872번 팩토리얼
#include <iostream>
using namespace std;
int main()
{
    long long num;
    num = 1;
    int N;
    cin >> N;
    for (int i = 1; i <= N; i++)
    {
        num *= i;
    }
    cout << num;
    return 0;
}