//1967번 트리의 지름
//트리 지름 구하는 원리만 알면 간단한 문제
#include <iostream>
#include <vector>
#include <utility>
#include<cstring>
using namespace std;
vector<pair<int,int>> adj[10005];
int visited[10005];
int result = 0;
int save_node;
void DFS(int node, int length){
	visited[node] = true;
	if(result < length){
		result = length;
		save_node = node;
	}
	for(int i = 0; i < adj[node].size(); i++){
		if(!visited[adj[node][i].first])
			DFS(adj[node][i].first, length+adj[node][i].second);

		
	}
}
int main(){
	int n;
	cin >> n;
	for(int i = 0; i < n-1; i++){
		int p,c,w;
		cin >> p >> c >> w;
		adj[p].push_back(make_pair(c,w));
		adj[c].push_back(make_pair(p,w));
	}
	DFS(1,0);
	memset(visited, false, sizeof(visited));
	result = 0;
	DFS(save_node, 0);
	cout << result;
}