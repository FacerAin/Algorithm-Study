#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main()
{
    int T;
    cin >> T;
    string buffer;
    getline(cin, buffer);
    while (T--)
    {
        string s;
        getline(cin, s);
        string subs;
        int slen = s.length();
        for (int i = 0; i < slen; i++)
        {
            if (s[i] == ' ')
            {
                reverse(subs.begin(), subs.end());
                cout << subs << " ";
                subs.clear();
            }
            else
            {
                subs += s[i];
            }
        }
        reverse(subs.begin(), subs.end());
        cout << subs << '\n';
    }
    return 0;
}