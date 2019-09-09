//2579번 계단 오르기
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int N;
    cin >> N;
    int A[301];
    int d[301];
    for (int i = 1; i <= N; i++)
    {
        cin >> A[i];
    }
    d[1] = A[1];
    d[2] = A[1]+A[2];
    for (int i = 3; i <= N; i++){
        d[i] = max(A[i]+d[i-2],d[i-3]+A[i]+A[i-1]);
    }
    cout << d[N];
    return 0; 
}