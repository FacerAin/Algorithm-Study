/*
2164번 카드2
*/
#include <iostream>
#include <deque>
using namespace std;

int main()
{
    deque<int> dq;
    dq.clear();
    int N;
    int tmp;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        dq.push_back(i + 1);
    }
    for (int i = 0; i < N - 1; i++)
    {
        dq.pop_front();
        tmp = dq.at(0);
        dq.push_back(tmp);
        dq.pop_front();
    }
    cout << dq.at(0);
    return 0;
}