//1149 RGB 거리
//우선 완전 탐색으로 해결해보자.
#include <iostream>
#include <algorithm>
using namespace std;
int arr[1005][3];
int dp[1005][3];
int N;
int main(){
	
	cin >> N;
	for(int i = 1; i <= N; i++){
		for(int j = 0; j < 3; j++){
			cin >> arr[i][j];
		}
	}
	
	for(int i = 1; i <= N; i++){
		dp[i][0] = min(dp[i-1][1], dp[i-1][2]) + arr[i][0];
		dp[i][1] = min(dp[i-1][0], dp[i-1][2]) + arr[i][1];
		dp[i][2] = min(dp[i-1][0], dp[i-1][1]) + arr[i][2];
	}
	cout << min(min(dp[N][0] , dp[N][1]),dp[N][2]);
	return 0;
}