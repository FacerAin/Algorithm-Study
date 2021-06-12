//1904 01타일
#include <iostream>
using namespace std;
int dp[1000005];
int DIV = 15746;
int main(){
	int N;
	cin >> N;
	dp[1] = 1;
	dp[2] = 2;
	for(int i = 3; i <= N; i++){
		dp[i] = (dp[i-1] + dp[i-2]) % DIV;
	}
	
	cout << dp[N];
	
}