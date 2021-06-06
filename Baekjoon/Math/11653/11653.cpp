//11653 소인수분해
//그냥 풀자
#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int N;
	cin >> N;
	int div = 2;
	while(N != 1){
		if(N % div == 0){
			N /= div;
			cout << div << '\n';
		}else{
			div++;
		}
	}
	return 0;
}