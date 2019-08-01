//10824번 네 수
#include <iostream>
#include <string>
using namespace std;
int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    string s1 = to_string(a) + to_string(b);
    string s2 = to_string(c) + to_string(d);
    long long num = stoll(s1) + stoll(s2);
    cout << num;
    return 0;
}