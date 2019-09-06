//2156번 포도주 시식
//차원이 높아질수록 어려워질수 밖에 없음. 문제 아이디어를 생각하는 전략은?
#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int n;
    cin >> n;
    int A[10001];
    int dp[10001];
    for(int i=1; i<=n; i++){
        cin >> A[i];
    }
    dp[1] = A[1];
    dp[2] = A[1]+A[2];
    for(int i=3; i<= n; i++){
        dp[i] = max(dp[i-1],max(dp[i-2]+A[i],dp[i-3]+A[i]+A[i-1]));
    }

    cout << dp[n];
    return 0;
}