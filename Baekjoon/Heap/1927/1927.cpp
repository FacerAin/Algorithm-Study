//1927 최소 힙
#include <iostream>
#include <queue>
using namespace std;
priority_queue<int,vector<int>,greater<int>> pq;//오름차순 힙 만드는 법
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
			if(pq.empty()){
				cout << 0 << '\n';
			}else{
				cout << pq.top() << '\n';
				pq.pop();
			}
		}else{
			pq.push(num);
		}
	
		
	}
	
	return 0;
}