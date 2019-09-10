//2133번 타일 채우기
#include <iostream>
using namespace std;
int main(){
    int N;
    cin >> N;
    int dp[31];
    dp[0] = 1;
    dp[1] = 0;
    for(int i =2; i <= N; i++){
        dp[i] = 3*dp[i-2];
        for(int j=i-4;j>=0;j-=2){
            dp[i] += 2*dp[j];
        }
    } 
    cout << dp[N];

    return 0;
}