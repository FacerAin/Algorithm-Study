//9019번 DSLR
//이미 방문한 노드는 다시 방문할 필요가 없다!
//memset 숙지하자!
#include <iostream>
#include <vector>
#include <string>
#include <queue>
#include <utility>
#include <cstring>
using namespace std;


queue<pair<int, string>> q;
bool visited[10000];

void Initialize()
{
    memset(visited, false, sizeof(visited));
}

string BFS(int a, int b){
	Initialize();
	q.push(pair<int,string>(a,""));
	while(!q.empty()){
		int cur_num = q.front().first;
		string cur_str = q.front().second;
		if(cur_num == b){
			return cur_str;
		}
		q.pop();
		//D
		int d_num = (cur_num * 2) % 10000;
		if(!visited[d_num]){
			visited[d_num] = true;
			q.push(pair<int,string>(d_num,cur_str+"D"));
		}
		
		//S
		int s_num = (cur_num - 1);
		if(s_num < 0){
			s_num = 9999;
		}
		if(!visited[s_num]){
			visited[s_num] = true;
			q.push(pair<int,string>(s_num,cur_str+"S"));
		}
		
		//R
		int l_num = ((cur_num - (cur_num%10))/10) + (cur_num%10)*1000;
		if(!visited[l_num]){
			visited[l_num] = true;
			q.push(pair<int,string>(l_num,cur_str+"R"));
		}
		
		//L
		
		int r_num = (cur_num%1000)*10 + (cur_num/1000);
		if(!visited[r_num]){
			visited[r_num] = true;
			q.push(pair<int,string>(r_num,cur_str+"L"));

		}
	}

}

int main(){
	int T;
	cin >> T;
	while(T--){
		q = queue<pair<int, string>>();
		int A, B;
		cin >> A >> B;
		string ans = BFS(A,B);
		cout << ans << '\n';
	}
}