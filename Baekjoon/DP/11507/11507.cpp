//11057번 오르막 수
#include <iostream>
using namespace std;
int main(){
    int N;
    cin >> N;
    long long dp[1001][10];
    long long sum = 0;
    for(int i =0; i<= 9; i++){
        dp[1][i] = 1;
    }
    for(int i=2; i <= N; i++){
        for(int j = 0; j <= 9; j++){
        	dp[i][j] = 0;
            for(int k = 0; k <= j; k++){

                dp[i][j] += dp[i-1][k];
                dp[i][j] %= 10007;
            }
            
        }
    }
    for(int i=0;i<=9;i++){
        sum += dp[N][i];
        sum %= 10007;
    }

    cout << sum;
    return 0;
}