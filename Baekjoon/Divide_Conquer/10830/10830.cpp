//10830 행렬 제곱
#include <iostream>
#include <vector>
using namespace std;
int N;
int MOD = 1000;
vector<vector<int>> mat_one(5, vector<int>(5));

vector<vector<int>> matMul(vector<vector<int>>& Amat, vector<vector<int>>& Bmat){
	int n = Amat.size();
	vector<vector<int>> C(n, vector<int>(n));
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


vector<vector<int>> matPow(vector<vector<int>>& A, long long B){
	if(B == 0){
		return mat_one;
	}
	else if(B == 1){
		return A;
	}
	else if(B % 2 == 0){
		vector<vector<int>> temp = matPow(A, B/2);
		return matMul(temp, temp);
	}else{
		vector<vector<int>> temp = matPow(A, B-1);
		return matMul(temp, A);
	}
}



int main(){
	long long B;
	cin >> N >> B;
	vector<vector<int>> A(N, vector<int> (N));
    vector<vector<int>> ans(N, vector<int> (N));
	
		for(int i = 0; i < N; i++){
		for(int j = 0; j < N; j++){
			cin >> A[i][j];
			A[i][j] %= MOD;
		}
		mat_one[i][i] = 1;
	}
	
	ans = matPow(A, B);
	
	for(int i = 0; i < N; i++){
		for(int j = 0; j < N; j++){
			cout << ans[i][j] % MOD << " ";
		}
		cout << '\n';
	}
	
	return 0;
}