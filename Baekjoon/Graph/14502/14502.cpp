
//14502번 연구소
#include <iostream>
#include <queue>
#include <utility>
#include <algorithm>
using namespace std;


int wall_cnt = 0;
int dy[4] = {1,-1,0,0};
int dx[4] = {0,0,1,-1};

int map[10][10];
int temp[10][10];
int check[10][10];
int N, M;
int ans;
queue<pair<int,int>> init_q;
queue<pair<int,int>> q;

void copyMap(){
	for(int i = 0; i < N; i++){
		for(int j = 0; j < M; j++){
			temp[i][j] = map[i][j];
		}
	}
}

bool isInside(int a, int b){
    return (a >= 0 && a < N) && (b >=0 && b < M);
}

void BFS(){
	int v_map[10][10];
		for(int i = 0; i < N; i++){
		for(int j = 0; j < M; j++){
			v_map[i][j] = temp[i][j];
		}
	}
	q = init_q;
	while(!q.empty()){
		int cur_y = q.front().first;
		int cur_x = q.front().second;
		q.pop();
		for(int i = 0; i < 4; i++){
			int next_y = cur_y + dy[i];
			int next_x = cur_x + dx[i];
			if(isInside(next_y,next_x) && v_map[next_y][next_x] == 0){
				v_map[next_y][next_x] = 2;
				q.push(pair<int,int>(next_y,next_x));
				
			}
		}
	}
	int sum = 0;
	
	for(int i = 0; i < N; i++){
		for(int j = 0; j < M; j++){
			if(v_map[i][j] == 0){
				sum++;
			}
		}
	}
	
	ans = max(ans, sum);
}

void make_wall(int cnt){
	
	if(cnt == 3){
		BFS();
		return;
	}
	for(int i = 0; i < N; i++){
		for(int j = 0; j < M; j++){
			if(temp[i][j] == 0){
				temp[i][j] = 1;
				make_wall(cnt+1);
				temp[i][j] = 0;
			}
		}
	}
}




int main(){
	//시작 바이러스의 위치는 바뀌지 않는다.
	//큐를 한번 저장해두고 계속 복사해서 사용하자.
	cin >> N >> M;
	for(int i = 0; i < N; i++){
		for(int j = 0; j < M; j++){
			cin >> map[i][j];
			if(map[i][j] == 2){
				init_q.push(pair<int,int>(i,j));
			}
		}
	}
	copyMap();
	make_wall(0);
	
	cout << ans;
	
	return 0;
}