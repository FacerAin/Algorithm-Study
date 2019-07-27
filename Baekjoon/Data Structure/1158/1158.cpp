//1158번 조세퍼스 문제
#include <iostream>
#include <queue>
using namespace std;
int main()
{
    int K, N;
    cin >> N;
    cin >> K;
    int p[6000];
    queue<int> q;

    for (int i = 0; i < N; i++)
    {
        q.push(i + 1);
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < K - 1; j++)
        {
            q.push(q.front());
            q.pop();
        }
        p[i] = q.front();
        q.pop();
    }
    cout << '<';
    for (int i = 0; i < N-1; i++)
    {
        cout << p[i] <<", ";
    }
    cout << p[N-1] << ">";
}