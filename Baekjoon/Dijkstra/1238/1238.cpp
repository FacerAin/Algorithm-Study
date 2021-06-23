//1238 파티
//다익스트라 활용 문제
#include <iostream>
#include <vector>
#include <utility>
#include <queue>
#include <algorithm>
using namespace std;
int N,M,X;
int INF = 99999999;
vector<pair<int,int>> adj[1005];

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

	cin >> N >> M >> X;
	vector<int> res_v;
	int a,b;
	for(int i = 0; i < M; i++){
		int cost;
		cin >> a >> b >> cost;
		adj[a].push_back(make_pair(b,cost));
	}
	for(int i = 1; i <= N; i++){
		vector<int> dist = dijkstra(i);
		res_v.push_back(dist[X]);
	}
	vector<int> dist = dijkstra(X);
	for(int i = 0; i < N; i++){
		res_v[i] += dist[i+1];
	}
	sort(res_v.begin(),res_v.end());
	cout << res_v[N-1];

	
	return 0;
}