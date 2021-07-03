//9251 LCS
/*
전통적인 DP 문제

*/

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int dp[1005][1005];



void print_dp(){
	for(int i = 0; i < 7; i++){
		for(int j = 0; j < 7; j++){
			cout << dp[i][j] << " ";
		}
		cout << endl;
	}
}
string s1,s2;
int main(){
	cin >> s1 >> s2;
	for(int i = 1; i <= s1.size(); i++){
		for(int j = 1; j <= s2.size(); j++){
			if(s1[i-1]==s2[j-1]){
				dp[i][j] = dp[i-1][j-1] + 1;
			}else{
				dp[i][j] = max(dp[i][j-1], dp[i-1][j]);
			}
			
		}
	}
	//print_dp();
	cout << dp[s1.size()][s2.size()];
	
	return 0;
}