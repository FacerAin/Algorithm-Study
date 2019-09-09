//1912번 연속합
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int N;
    cin >> N;
    int A[100001];
    int d[100001];
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }
    for (int i = 0; i < N; i++)
    {
        d[i] = max(A[i], d[i - 1] + A[i]);
    }
    int max = d[0];
    for (int i = 0; i < N; i++)
    {
        if(max < d[i]){
            max = d[i];
        }
    }
    cout << max;
}