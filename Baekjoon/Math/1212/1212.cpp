//1212번 8진수 2진수
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s;
    string oct[8] = {"000", "001", "010", "011", "100", "101", "110", "111"};
    int num;
    cin >> s;
    int len = s.size();
    bool init = true;
    for (int i = 0; i < len; i++)
    {
        num = (s[i] - '0');
        if (init && num == 1)
        {
            cout << "1";
        }
        else if (init && num == 2)
        {
            cout << "10";
        }
        else if (init && num == 3)
        {
            cout << "11";
        }
        if (!init||num>3)
        {

            cout << oct[num];
        }
        init = false;
    }
    return 0;
}