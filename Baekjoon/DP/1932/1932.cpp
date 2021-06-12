//1932 정수 삼각형
//부분 문제와 점화식은?
#include <iostream>
#include <algorithm>
using namespace std;
int n;
int dp[505][505];
int main(){
	cin >> n;
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= i; j++){
			cin >> dp[i][j];
		}
	}
	
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= i; j++){
			dp[i][j] += max(dp[i-1][j-1],dp[i-1][j]);
		}
	}
	int result = 0;
	
	for(int i = 1; i <= n; i++){
		result = max(result,dp[n][i]);
	}
	
	cout << result;
	
	return 0;
	
}