//�ܾ� ������2 ������ ���� ������ ���� �Ƚᵵ �Ǵ�?
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
        //���
        if (s[i] == '<')
        {
            tag = true;
            reverse(subs.begin(), subs.end());
            cout << subs;
            cout << "<";
            subs.clear();
        }
        else if (s[i] == '>')
        {
            tag = false;
            cout << subs;
            cout << ">";
            subs.clear();
        }
        else if (s[i] == ' ' && tag == false)
        {
            reverse(subs.begin(), subs.end());
            cout << subs;
            cout << " ";
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