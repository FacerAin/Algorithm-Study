//5622번 다이얼
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int len = s.size();
    int cnt = 0;
    for (int i = 0; i < len; i++)
    {
        if (s[i] >= 'A' && s[i] <= 'C')
        {
            cnt += 2;
        }
        else if (s[i] >= 'D' && s[i] <= 'F')
        {
            cnt += 3;
        }
        else if (s[i] >= 'G' && s[i] <= 'I')
        {
            cnt += 4;
        }
        else if (s[i] >= 'J' && s[i] <= 'L')
        {
            cnt += 5;
        }
        else if (s[i] >= 'M' && s[i] <= 'O')
        {
            cnt += 6;
        }
        else if (s[i] >= 'P' && s[i] <= 'S')
        {
            cnt += 7;
        }
        else if (s[i] >= 'T' && s[i] <= 'V')
        {
            cnt += 8;
        }
        else if (s[i] >= 'W' && s[i] <= 'Z')
        {
            cnt += 9;
        }
        cnt++;
    }
    cout << cnt;
    return 0;
}