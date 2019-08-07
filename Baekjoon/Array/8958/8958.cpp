//8958번 OX퀴즈
#include <iostream>
#include <string>
using namespace std;
int main()
{
    int N,score,sum;
    cin >> N;
    while (N--)
    {
        string s;
        cin >> s;
        score =0;
        sum = 0;
        int len = s.size();
        for (int j = 0; j < len; j++)
        {
            if (s[j] == 'O')
            {
                sum += 1;
            }
            else if (s[j] == 'X')
            {
                sum = 0;
            }
            score += sum;
        }
        cout << score << endl;
    }
    return 0;
}