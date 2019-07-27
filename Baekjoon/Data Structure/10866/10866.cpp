//10866번 덱
#include <iostream>
#include <string>
#include <deque>

using namespace std;

int main()
{
    int N;
    cin >> N;
    deque<int> d;

    for (int i = 0; i < N; i++)
    {
        string cmd;
        cin >> cmd;
        if (cmd == "push_front")
        {
            int num;
            cin >> num;
            d.push_front(num);
        }
        else if (cmd == "push_back")
        {
            int num;
            cin >> num;
            d.push_back(num);
        }
        else if (cmd == "pop_front")
        {
            if (d.empty())
            {
                cout << -1 << '\n';
            }
            else
            {
                cout << d.front() << '\n';
                d.pop_front();
            }
        }
        else if (cmd == "pop_back")
        {
            if (d.empty())
            {
                cout << -1 << '\n';
            }
            else
            {
                cout << d.back() << '\n';
                d.pop_back();
            }
        }
        else if (cmd == "size")
        {
            cout << d.size() << '\n';
        }
        else if (cmd == "empty")
        {
            cout << d.empty() << '\n';
        }
        else if (cmd == "front")
        {
            if (d.empty())
            {
                cout << -1 << '\n';
            }
            else
            {
                cout << d.front() << '\n';
            }
        }
        else if (cmd == "back")
        {
            if (d.empty())
            {
                cout << -1 << '\n';
            }
            else
            {
                cout << d.back() << '\n';
            }
        }
    }
}