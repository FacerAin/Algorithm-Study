//1753 최단경로
//다익스트라 활용 문제
#include <iostream>
#include <vector>
#include <utility>
#include <queue>
#include <algorithm>
using namespace std;
int N,M,K;
int INF = 99999999;
vector<pair<int,int>> adj[20005];

vector<int> dijkstra(int src){
	vector<int> dist(N+1,INF);
	dist[src] = 0;
	priority_queue<pair<int,int>> pq;
	pq.push(make_pair(0,src));
	while(!pq.empty()){
		int cost = -pq.top().first;
		int here = pq.top().second;
		
		pq.pop();
		if(dist[here] < cost){//이미 방문한 정점 (중복) 처리
			continue;
		} 
		for(int i = 0; i < adj[here].size(); i++){
			int there = adj[here][i].first;
			int nextDist = cost + adj[here][i].second;
			if(dist[there] > nextDist){//dist 갱신
				dist[there] = nextDist;
				
				
				pq.push(make_pair(-nextDist, there));
			}
		}
	}
	return dist;
}



int main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	cin >> N >> M >> K;
	for(int i = 0; i < M; i++){
		int a,b,c;
		cin >> a >> b >> c;
		adj[a].push_back(make_pair(b,c));
	}

	vector<int> dist = dijkstra(K);
	for(int i = 1; i <= N; i++){

		int res = dist[i];
		if(res == INF){
			cout << "INF" << '\n';
		}else{
			cout << res << '\n';
		}
	}
	
	return 0;
}