//9461번 파도반 수열
#include <iostream>
using namespace std;
int main(){
    int T;
    int N;
    cin >> T;
    int dp[101];
    dp[1] = dp[2] = dp[3] = 1;
    while(T--){
        cin >> N;
        for(int i = 4; i <= N; i++){
            dp[i] = dp[i-2]+ dp[i-3];
        }
        cout << dp[N] << '\n';
    }
    return 0;

}
