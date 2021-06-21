//12865 평범한 배낭
//대표적인 0-1 배낭 문제
#include <iostream>
#include <algorithm>
//dp[물건 개수][가방 무게]
int N,K;
int item[105][2];
int dp[105][100005];
using namespace std;

int main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	cin >> N >> K;
	for(int i = 1; i <= N; i++){
		int W,V;
		cin >> W >> V;
		item[i][0] = W;
		item[i][1] = V;
	}
	
	/*
	DP[i][j] = max((DP[i][j-해당 물건 무게]+해당 물건 가치),DP[i-1][j])
	*/
	for(int i = 1; i <=N; i++){
		int w = item[i][0];
		int v = item[i][1];
		for(int j = 0; j <= K; j++){
			if(j < w){
				dp[i][j] = dp[i-1][j];
			}else{
				dp[i][j] = max(dp[i-1][j] , dp[i-1][j-w] + v);
			}
		}
		
		
	}
	
	cout << dp[N][K];
	
	
}