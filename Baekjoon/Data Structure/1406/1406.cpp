//1406번 에디터
#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main()
{
    string s;
    cin >> s;
    stack<char> stL, stR;
    for (int i = 0; i < s.size(); i++)
    {
        stL.push(s[i]);
    }
    int N;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        char cmd;
        cin >> cmd;
        if (cmd == 'L')
        {
            if (!stL.empty())
            {
                stR.push(stL.top());
                stL.pop();
            }
        }
        else if (cmd == 'D')
        {
            if(!stR.empty()){
                stL.push(stR.top());
                stR.pop();
            }
        }
        else if (cmd == 'B')
        {
            if(!stL.empty()){
                stL.pop();
            }
        }
        else if (cmd == 'P')
        {
            char c;
            cin >> c;
            stL.push(c);
        }
    }
    while(!stL.empty()){
        stR.push(stL.top());
        stL.pop();
    }
    while(!stR.empty()){
        cout << stR.top();
        stR.pop();
    }
    return 0;
}