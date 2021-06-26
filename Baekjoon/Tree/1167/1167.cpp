//1167번 트리의 지름
//1967과 유사, 트리 지름 구하는 원리만 알면 간단한 문제
#include <iostream>
#include <vector>
#include <utility>
#include<cstring>
using namespace std;
vector<pair<int,int>> adj[100005];
int visited[100005];
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
	for(int i = 0; i < n; i++){
		int parent, child, cost;
		cin >> parent;
		while(1){
			cin >> child;
			if(child == -1){
				break;
			}
			cin >> cost;
			adj[parent].push_back(make_pair(child,cost));
			
		}
		
	}
	DFS(1,0);
	memset(visited, false, sizeof(visited));
	result = 0;
	DFS(save_node, 0);
	cout << result;
}