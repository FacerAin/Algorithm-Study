//2606번 바이러스
#include <iostream>
#include <vector>

using namespace std;
int N, M;
vector<int> map[101];
int check[101];
int cnt = 0;
void dfs(int node){
	check[node] = 1;
	for(int i = 0; i < map[node].size(); i++){
		if(!check[map[node][i]]){
			dfs(map[node][i]);
			cnt++;
		}
		
	}
}
int main() {
	cin >> N >> M;
	for(int i = 0; i < M; i++){
		int a, b;
		cin >> a >> b;
		map[a].push_back(b);
		map[b].push_back(a);
	}
	dfs(1);
	cout << cnt;
	
	return 0;
}