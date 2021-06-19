//16953번 A -> B
#include <iostream>
#include <queue>
#include <utility>

using namespace std;

queue<pair<long, int>> q;
int A, B;
void BFS(){
	while(!q.empty()){
		long cur_num = q.front().first;
		int cur_time = q.front().second;
		q.pop();
		//Break Point
		if(cur_num == B){
			cout << cur_time + 1;
			return;
		}
		//*2
		long d_num = cur_num * 2;
		if(d_num <= B){
			q.push(pair<long,int>(d_num, cur_time+1));
		}
		
		//오른쪽에 1 추가
		//int 자료형을 넘어설 수 있다 주의!
		long p_num = cur_num * 10 + 1;
		if(p_num <= B){
			q.push(pair<long,int>(p_num, cur_time+1));
		}
		
	}
	
	cout << -1;
	return;
}

int main(){
	
	cin >> A >> B;
	q.push(pair<long,int>(A,0));
	BFS();
	return 0;
}