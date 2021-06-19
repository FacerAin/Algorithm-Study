//1629 곱셈
//모듈러 합동 공식
#include <iostream>
using namespace std;
long long A,B,C;

long long pow(long long A, long long exp){
	if(exp == 1){
		return A % C;
	}
	
	long long temp = pow(A, exp/2);
	if(exp % 2 == 1){
		return (temp * temp % C) * A % C; 
	}
	return temp * temp % C;
}
int main(){

	cin >> A >> B >> C;
	cout << pow(A,B);
	
	return 0;
}