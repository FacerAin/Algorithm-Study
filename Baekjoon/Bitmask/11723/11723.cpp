//11723번 집합
//비트마스크를 이용해보자
//변수 초기화 잘하자
#include <iostream>
#include <string>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	string oper_s;
	int M;
	int BIT = 0;
	cin >> M;
	while(M--){
		oper_s.clear();
		int num;
		cin >> oper_s;
		
		if(oper_s == "add"){
			cin >> num;
			BIT |= (1<<num-1);//OR
		}else if(oper_s == "check"){
			cin >> num;
			if (BIT & (1 << num-1)){cout << 1 << '\n';}
            else{cout << 0 << '\n';}    
		}else if(oper_s == "remove"){
			cin >> num;
			BIT &= ~(1 << num-1);
		}else if(oper_s == "toggle"){
			cin >> num;
			BIT ^= (1 << num-1); //XOR
		}else if(oper_s == "all"){
			 BIT = (1 << 20) - 1;
		}else if(oper_s == "empty"){
			BIT = 0;
		}
		
		
	}
	return 0;
}