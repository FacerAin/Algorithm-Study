/*
18258번
큐 2
*/
#include <iostream>
#include <queue>
#include <string>

using namespace std;

int main()
{
    cin.tie(0);
    cin.sync_with_stdio(false);
    int T;
    cin >> T;
    queue<int> q;

    while (T--)
    {
        string oper;
        int num;
        cin >> oper;
        if (oper == "push")
        {
            cin >> num;
            q.push(num);
        }
        else if (oper == "pop")
        {
            if (q.empty())
            {
                cout << -1 << '\n';
            }
            else
            {
                cout << q.front() << '\n';
                q.pop();
            }
        }
        else if (oper == "size")
        {
            cout << q.size() << '\n';
        }
        else if (oper == "empty")
        {
            if (q.empty())
            {
                cout << 1 << '\n';
            }
            else
            {
                cout << 0 << '\n';
            }
        }
        else if (oper == "front")
        {
            if (q.empty())
            {
                cout << -1 << '\n';
            }
            else
            {
                cout << q.front() << '\n';
            }
        }

        else if (oper == "back")
        {
            if (q.empty())
            {
                cout << -1 << '\n';
            }
            else
            {
                cout << q.back() << '\n';
            }
        }
    }

    return 0;
}