//7662 이중 우선순위 큐
//뭔가 특이한 자료구조를 사용하여 풀면 될 줄 알았는데
//우선 순위 큐 두개 만들어서 그냥 풀면 된다.

#include <iostream>
#include <queue>
#include <vector>
#include <string>
#include <algorithm>
#include <set>
using namespace std;


int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int T;
	cin >> T;
	while(T--){
		multiset<int> ms;
		int K;
		cin >> K;
		for(int i = 0; i < K; i++){
			string s;
			int num;
			cin >> s >> num;
			if(s == "I"){
				ms.insert(num);
			}
			else if(s == "D"){
				if(ms.empty()){
					continue;
				}
				if(num == 1){
				auto iter = ms.end();
				iter--;
					ms.erase(iter);
				}else if(num == -1){
					ms.erase(ms.begin());
				}
			}
		}
		
		if(ms.empty()){
			cout << "EMPTY" << '\n';
		}else{
			auto iter = ms.end();
			iter--;
			cout << *iter << " " << *(ms.begin()) << '\n'; 
		}
		
	}
	
	return 0;
}