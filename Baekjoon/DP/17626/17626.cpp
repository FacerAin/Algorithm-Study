//17626번 Four Squares

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int dp[50005];
int main(){
	int n;
	cin >> n;
	dp[0] = 0;
	dp[1] = 1;
	
	for(int i = 2; i <= n; i++){
		int min_num = 999999999;
		for(int j = 1; j * j <= i; j++){
			min_num = min(min_num,dp[i-j*j]);
		}
		dp[i] = min_num + 1;
	}
	
	cout << dp[n];
	
	
	return 0;
}