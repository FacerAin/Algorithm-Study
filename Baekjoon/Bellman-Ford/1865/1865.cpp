#include <iostream>
#include <vector>
#include <utility>

using namespace std;
const int MAX_V = 505;
const int INF = 999999999;
int V;

vector<pair<int,int>> adj[MAX_V];

bool bellmanFord(int src){
	vector<int> upper(V+1,INF);
	upper[src] = 0;
	bool updated;
	for(int iter = 0; iter < V; iter++){
		updated = false;
		for(int here = 1; here <= V; here++){
			for(int i = 0; i < adj[here].size(); i++){
				int there = adj[here][i].first;
				int cost = adj[here][i].second;
				if(upper[there] > upper[here] + cost){
					upper[there] = upper[here] + cost;
					updated = true;
					}
				}
		}
		if(!updated){
			break;
		}

	}	
		if(updated){
			return false;
		
		}
		return true;
}

int main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int TC;
	cin >> TC;
	while(TC--){
		
		int N, M, W;
		cin >> V >> M >> W;
		int S, E, T;
		for(int i = 0; i < MAX_V; i++){
			adj[i].clear();
		}
		
		for(int i = 0; i < M; i++){
			cin >> S >> E >> T;
			adj[S].push_back(make_pair(E,T));
			adj[E].push_back(make_pair(S,T));
		}
		
		for(int i = 0; i < W; i++){
			cin >> S >> E >> T;
			adj[S].push_back(make_pair(E,-T));
			
		}
		
		if(bellmanFord(1)){
			cout << "NO" << '\n';
		}else{
			cout << "YES" << '\n';
		}

	}
	return 0;
}

	
	