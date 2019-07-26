//10799번 쇠막대기
#include <iostream>
#include <string>
#include <stack>
using namespace std;

int check(string s)
{
    int cnt = 0;
    int result = 0;
    stack<char> st;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '(')
        {
            st.push(s[i]);
            cnt++;
        }
        else
        {
            if (st.top() == '(')
            {
                st.push(s[i]);
                cnt--;
                result += cnt;
            }
            else
            {
                cnt--;
                result++;
            }
        }
    }
    return result;
}
int main()
{
    string s;
    cin >> s;
    cout << check(s) << endl;
}
