//11005번 진법변환 2
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main()
{
    int N, B;
    cin >> N >> B;
    string ans = "";
    while (N != 0)
    {
        if (N % B >= 10)
        {
            ans += char(N % B + 55);
        }
        else
        {
            ans +=  char(N % B+'0');
        }

        N /= B;
    }
    reverse(ans.begin(),ans.end());
    cout << ans<< '\n';
    return 0;
}