//2475 검증수 Basic IO

#include <iostream>
using namespace std;
int main() {
	int sum = 0;
	for(int i = 0; i <5; i++){
		int num;
		cin >> num;
		sum += num * num;
	}
	cout << sum%10;
	