//7576 토마토
//bfs -> 최단 거리 탐색임을 이용해보자.
//배열 크기 확인하자.
#include <iostream>
#include <vector>
#include <queue>
#include <string>
#include <utility>
using namespace std;
int N, M;
int map[1001][1001];
//int check[101][101];
int dy[4] = {1,-1,0,0};
int dx[4] = {0,0,1,-1};

queue<pair<int,int>> q;

//check [y, x] is in or not
bool isInside(int a, int b){
    return (a >= 0 && a < N) && (b >=0 && b < M);
}

//참고 https://blockdmask.tistory.com/182 [개발자 지망생]

void bfs(){
	int cur_x, cur_y;
	while(!q.empty()){
		cur_y = q.front().first;
		cur_x = q.front().second;
		q.pop();
		for(int i = 0; i < 4; i++){
			int next_x = cur_x+dx[i];
			int next_y = cur_y+dy[i];
			if(isInside(next_y,next_x) && map[next_y][next_x] == 0){
				map[next_y][next_x] += map[cur_y][cur_x] + 1;
				q.push(pair<int,int>(next_y,next_x));
			}
		}
		
		
		
		
	}
}
int main() {
	cin >> M >> N;
	for(int i = 0; i < N; i++){
		for(int j = 0; j < M; j++){
			cin >> map[i][j];
			if(map[i][j] == 1){
				q.push(pair<int,int>(i,j));
			}
		}
	}
	bfs();
	/*
	for(int i = 0; i < N; i++){
		for(int j = 0; j < M; j++){
			cout << map[i][j] << " ";
		}
		cout << endl;
	}
	*/
	
	int max_day = 0;
	for(int i = 0; i < N; i++){
		for(int j = 0; j < M; j++){
			if(map[i][j] == 0){
				cout << -1;
				return 0;
			}
			if(max_day < map[i][j]){
				max_day = map[i][j];
			}
		}
	}
	
	cout << max_day - 1;

	return 0;
}