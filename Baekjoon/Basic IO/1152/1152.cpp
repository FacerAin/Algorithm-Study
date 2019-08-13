//1152번 단어의 개수
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string S;
    int cnt = 1;

    getline(cin, S);
    int len = S.size();

    for (int i = 0; i < len; i++)
    {
        if (S[i] == ' ' && S[i + 1] != ' ')
        {
            cnt++;
        }
    }
    if (S[0] == ' ')
    {
        cnt--;
    }

    if (S[len - 1] == ' ')
    {
        cnt--;
    }
    cout << cnt;

    return 0;
}