//6064번 카잉달력
//BT로 구현하라고 낸 문제는 아님
//정수론 문제에 약하다. 특히 모듈로 연산! 어떻게 연습할까?
#include <iostream>
using namespace std;
int GCD(int a, int b){
	if (a % b == 0)
		return b;
	return GCD(b, a % b);
}

int LCM(int a, int b){
        return (a * b) / GCD(a, b);
}


int main(){
	
	int T;
	cin >> T;
	while(T--){
		int M,N,x,y;
		cin >> M >> N >> x >> y;
		int MAX = LCM(M,N);
		while(1){
			if(x>MAX || (x-1) % N + 1 == y){
				break;
			}
			x += M;
		}
		
		if(x > MAX){
			cout << -1 << '\n';
		}else{
			cout << x << '\n';
		}
		
	}
	return 0;
}