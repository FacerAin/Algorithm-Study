//11576번 Base Conversion
//진법 변환 테크닉 숙지
#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;

void convert(int num, int base)
{
    if (num == 0)
    {
        return;
    }
    convert(num / base, base);
    cout << num % base << ' ';
}
int main()
{
    int A, B, m;
    long long sum;
    int num;
    cin >> A >> B;
    cin >> m;
    sum = 0;

    for (int i = 0; i < m; i++)
    {
        cin >> num;
        sum += pow(A, m - i - 1) * num;
    }
    convert(sum, B);
    return 0;
}