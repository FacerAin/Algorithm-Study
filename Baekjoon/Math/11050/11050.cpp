//11050 이항 계수 1

#include <iostream>

using namespace std;
int N, K;
int fact(int num){
	if(num==0){
		return 1;
	}
	return num*fact(num-1);
}
int main() {	
	cin >> N >> K;
	cout << fact(N) / fact(K) / fact(N-K);
	return 0;
	
}