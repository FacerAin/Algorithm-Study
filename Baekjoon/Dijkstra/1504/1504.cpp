//1504 특정한 최대경로
//다익스트라 활용 문제
#include <iostream>
#include <vector>
#include <utility>
#include <queue>
#include <algorithm>
using namespace std;
int N,M;
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

	cin >> N >> M;
	int a,b;
	for(int i = 0; i < M; i++){
		int cost;
		cin >> a >> b >> cost;
		adj[a].push_back(make_pair(b,cost));
		adj[b].push_back(make_pair(a,cost));
	}
	cin >> a >> b;
	
	vector<int> Sto = dijkstra(1);
	vector<int> Ato = dijkstra(a);
	vector<int> Bto = dijkstra(b);
	if(Sto[a] == INF || Sto[b] == INF || Sto[N] == INF){
		cout << -1;
		return 0;
	}
	long long result1 = Sto[a] + Ato[b] + Bto[N];
	long long result2 = Sto[b]+Bto[a]+Ato[N];

	cout << min(result1, result2);
	
	//0 -> a -> b -> N
	
	//0 -> b -> a -> N
	
	
	return 0;
}