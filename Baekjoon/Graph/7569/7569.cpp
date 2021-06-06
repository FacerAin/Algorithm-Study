//7569번 토마토
#include <iostream>
#include <vector>
#include <queue>
#include <string>
#include <utility>
#include <tuple>
using namespace std;
int N, M, H;
int map[105][105][105];
//int check[101][101];

//앞 뒤 오른쪽 왼쪽 위 아래
int dy[6] = {1,-1,0,0,0,0};
int dx[6] = {0,0,1,-1,0,0};
int dh[6] = {0,0,0,0,1,-1};

queue<pair<pair<int,int>,int>> q;

//check [y, x, h] is in or not
bool isInside(int a, int b, int c){
    return (a >= 0 && a < N) && (b >=0 && b < M)&& (c >= 0 && c < H);
}

//참고 https://blockdmask.tistory.com/182 [개발자 지망생]

void bfs(){
	int cur_x, cur_y, cur_h;
	while(!q.empty()){
		cur_y = q.front().first.first;
		cur_x = q.front().first.second;
		cur_h = q.front().second;
		q.pop();
		for(int i = 0; i < 6; i++){
			int next_x = cur_x+dx[i];
			int next_y = cur_y+dy[i];
			int next_h = cur_h+dh[i];
			if(isInside(next_y,next_x,next_h) && map[next_y][next_x][next_h] == 0){
				map[next_y][next_x][next_h] += map[cur_y][cur_x][cur_h] + 1;
				q.push((make_pair(make_pair(next_y, next_x), next_h)));
			}
		}
		
		
		
		
	}
}
int main() {
	cin >> M >> N >> H;
	for(int h = 0; h < H; h++){
		for(int i = 0; i < N; i++){
			for(int j = 0; j < M; j++){
				cin >> map[i][j][h];
				if(map[i][j][h] == 1){
					q.push(make_pair(make_pair(i, j), h));
				}
		}
	}
	}

	bfs();
	/*
	for(int h = 0; h < H; h++){
		for(int i = 0; i < N; i++){
		for(int j = 0; j < M; j++){
			cout << map[i][j][h] << " ";
		}
		cout << endl;
	}
		cout << endl;
	
	}
	*/

	
	int max_day = 0;
	for(int h = 0; h < H; h++){
		for(int i = 0; i < N; i++){
			for(int j = 0; j < M; j++){
				if(map[i][j][h] == 0){
					cout << -1;
						return 0;
			}
				if(max_day < map[i][j][h]){
					max_day = map[i][j][h];
				}
		}
	}
	}

	
	cout << max_day - 1;

	return 0;
}