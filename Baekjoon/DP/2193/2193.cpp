//2193번 이친수
#include <iostream>
using namespace std;
int main(){
    int N;
    cin >> N;
    long long dp[91][2];
    dp[1][1] = 1;
    dp[1][0] = 0;
    for(int i=2; i<=N; i++){
        for(int j=0; j<=1; j++){
            if(j==0){
                dp[i][j] = 0;
                dp[i][j] += dp[i-1][0] + dp[i-1][1];
            }
            else{
                dp[i][j] = 0;
                dp[i][j] += dp[i-1][0];
            }
        }
    }
    cout << dp[N][0] + dp[N][1];

    return 0;

}