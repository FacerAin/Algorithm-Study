//11444 피보나치 수열
#include <iostream>
#include <vector>
using namespace std;
int N;
int MOD = 1000000007;
vector<vector<long>> mat_A(2, vector<long>(2));

vector<vector<long>> matMul(vector<vector<long>>& Amat, vector<vector<long>>& Bmat){
	int n = Amat.size();
	vector<vector<long>> C(n, vector<long>(n));
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			for(int k = 0; k < n; k++){
				C[i][j] += Amat[i][k] * Bmat[k][j];
			}
			C[i][j] %= MOD;
		}
	}
	
	return C;
}


vector<vector<long>> matPow(vector<vector<long>>& A, long long B){
	if(B == 1 || B == 0){
		return A;
	}
	else if(B % 2 == 0){
		vector<vector<long>> temp = matPow(A, B/2);
		return matMul(temp, temp);
	}else{
		vector<vector<long>> temp = matPow(A, B-1);
		return matMul(temp, mat_A);
	}
}



int main(){
	mat_A[0][0] = 1;
	mat_A[0][1] = 1;
	mat_A[1][0] = 1;
	mat_A[1][1] = 0;
	long long n;
	cin >> n;
	vector<vector<long>> ans;
	
	
	
	ans = matPow(mat_A, n-1);
	
	cout << ans[0][0];
	return 0;
}