//단어 뒤집기2 스택을 쓰면 좋지만 굳이 안써도 되는?
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    string subs;
    int slen = s.length();
    bool tag = false;
    for (int i = 0; i < slen; i++)
    {
        if (s[i] == '<' && tag == false)
        {
            reverse(subs.begin(), subs.end());
            cout << subs;
            subs.clear();
        }
        else if (s[i] == '<')
        {
            bool tag = true;
            subs += s[i];
        }

        else if (s[i] == ' ' && tag == false)
        {
            reverse(subs.begin(), subs.end());
            cout << subs << " ";
            subs.clear();
        }
        else if (s[i] == '>')
        {
            subs += s[i];
            bool tag = false;
            cout << subs;
            subs.clear();
        }
        else
        {
            subs += s[i];
        }
    }
    reverse(subs.begin(), subs.end());
    cout << subs << '\n';
    return 0;
}