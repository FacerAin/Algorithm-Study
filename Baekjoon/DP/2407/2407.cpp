//2407 조합
#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>

using namespace std;

string map[105][105];

string ADD(string num1, string num2){
	long long sum = 0;
	string result;
	
	while(!num1.empty() || !num2.empty() || sum){
		if(!num1.empty()){
			sum += num1.back() - '0';
			num1.pop_back();
		}
		if(!num2.empty()){
			sum += num2.back() - '0';
			num2.pop_back();
		}
		result.push_back((sum%10) + '0');
		sum /= 10;
	}
	reverse(result.begin(), result.end());
	return result;
}
//https://jaimemin.tistory.com/682

string comb(int N, int R){
	
	if(N == R || R == 0){
		return "1";
	}
	
	string& ret = map[N][R];
	
	if(ret != ""){
		return ret;
	}
	
	return ret = ADD(comb(N-1,R-1), comb(N-1,R));
}

int main(){
	int N,M;
	cin >> N >> M;
	cout << comb(N,M);
	return 0;
}