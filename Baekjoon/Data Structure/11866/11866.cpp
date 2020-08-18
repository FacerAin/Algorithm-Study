/*
11866번
요세푸스 문제 0
*/

#include <iostream>
#include <queue>
using namespace std;

int main()
{
    int N, K;
    int tmp;
    cin >> N >> K;
    queue<int> que1;
    queue<int> que2;

    for (int i = 1; i <= N; i++)
    {
        que1.push(i);
    }

    while (1)
    {
        if (que1.empty())
        {
            break;
        }
        for (int i = 0; i < K - 1; i++)
        {
            tmp = que1.front();
            que1.pop();
            que1.push(tmp);
        }
        tmp = que1.front();
        que2.push(tmp);
        que1.pop();
    }
    cout << "<";
    for (int i = 0; i < N; i++)
    {

        tmp = que2.front();
        que2.pop();
        if (i == N - 1)
        {
            cout << tmp;
        }
        else
        {
            cout << tmp << ", ";
        }
    }
    cout << ">";
    return 0;
}