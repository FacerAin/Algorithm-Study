//1003번 피보나치 함수
#include <iostream>
using namespace std;
int main(){
    int T,N;
    int dp[41] = {0,1};
    for(int i=2;i<42;i++){
        dp[i]=dp[i-1]+dp[i-2];
    }
    cin >> T;
    while(T--){
        cin >> N;
        if(N==0){
            cout << "1 0" << endl;
        }
        else if(N==1){
            cout << "0 1" << endl;;
        }
        else{
            cout << dp[N-1] << " " << dp[N] << endl;
        }
    }
    return 0;
}