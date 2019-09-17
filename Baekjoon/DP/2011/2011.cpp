//2011번 암호코드
#include <iostream>
#include <string>

using namespace std;
int main()
{
    string s;
    cin >> s;
    long long dp[1000001];
    int len = s.length();
    dp[0] = 1;

    for (int i = 1; i < len; i++)
    {
        dp[i] = 0;
        if ((s[i] - '0') > 0 && (s[i] - '0') <= 9)
        {
            dp[i] += dp[i - 1];
            dp[i] %= 1000000;
        }
        if((s[i - 1] - '0') * 10 + (s[i] - '0') <= 26 && (s[i - 1] - '0') * 10 + (s[i] - '0') >= 10 && i==1){
            dp[i] += 1;
        }

        if (s[i - 1] == '0')
        {
            continue;
        }

        if ((s[i - 1] - '0') * 10 + (s[i] - '0') <= 26 && (s[i - 1] - '0') * 10 + (s[i] - '0') >= 10)
        {
            dp[i] += dp[i - 2];
        }
        cout << s[i] << ' ' << dp[i] << endl;
    }
    cout << dp[len - 1] << endl;

    return 0;
}