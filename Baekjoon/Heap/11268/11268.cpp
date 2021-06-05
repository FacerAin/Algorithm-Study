//11286 절댓값 힙
#include <iostream>
#include <queue>
using namespace std;
priority_queue<int> nq; //최대힙 음수힙
priority_queue<int,vector<int>,greater<int>>  pq; //최소힙 양수힙
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	int N;
	cin >> N;
	for(int i = 0; i < N; i++){
		int num;
		cin >> num;
		if(num == 0){
			if(pq.empty() && nq.empty()){
				cout << 0 << '\n';
			}
			else if(pq.empty()){
				cout << nq.top() << '\n';
				nq.pop();
			}else if(nq.empty()){
				cout << pq.top() << '\n';
				pq.pop();
			}else if(pq.top() < -(nq.top())){
				cout << pq.top() << '\n';
				pq.pop();
			}else{
				cout << nq.top() << '\n';
				nq.pop();
			}
		}else{
			if(num > 0){
				pq.push(num);
			}else{
				nq.push(num);
			}
		}
	
		
	}
	
	return 0;
}