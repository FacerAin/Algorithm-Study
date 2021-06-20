//17144번 미세먼지 안녕!
#include <iostream>
#include <queue>
#include <utility>
using namespace std;
int R,C,T;
int map[55][55];
int dx[] = {1,-1,0,0};
int dy[] = {0,0,1,-1};
queue<pair<pair<int,int>,int>> q;

int a_dy[] = {0,-1,0,1};
int a_dx[] = {1,0,-1,0};

int a1 = 0;
int a2 = 0;

bool isInside(int a, int b){
	return (a>=0 && a < R) && (b>=0) && (b < C);
}
void SPREAD(){
	queue<pair<pair<int,int>,int>> temp;
	//확산은 동시에 일어난다 => 이를 어떻게 처리하는가?
	for(int i = 0; i < R; i++){
		for(int j = 0; j < C; j++){
			if(map[i][j] > 0){//확산 전 탐색
				int dir_num = 0;
				for(int k = 0; k < 4; k++){
					int next_y = i + dy[k];
					int next_x = j + dx[k];
				
					if(isInside(next_y,next_x) && map[next_y][next_x] >= 0){
						temp.push(make_pair(make_pair(next_y, next_x), map[i][j]/5));
						dir_num++;
						}
				}
					map[i][j] = map[i][j] - (map[i][j]/5) * dir_num;
				
				}
		}
	}
	
	while(!temp.empty()){
		int cur_y = temp.front().first.first;
		int cur_x = temp.front().first.second;
		int cur_num = temp.front().second;
		map[cur_y][cur_x] += cur_num;
		temp.pop();
	}
}

void AIR(){
	
	int cur_y = a1;
	int cur_x = 1;
	int pre = 0;
	int post;
	int i = 0;
	while(cur_y != a1 || cur_x != 0){
		post = map[cur_y][cur_x];
		map[cur_y][cur_x] = pre;
		pre = post;
		if(!isInside(cur_y+a_dy[i],cur_x+a_dx[i])){
			i++;
		}
		cur_y += a_dy[i];
		cur_x += a_dx[i];
	}
	
	i = 0;
	cur_y = a2;
	cur_x = 1;
	pre = 0;

	while(cur_y != a2 || cur_x != 0){
		//다음 것을 저장하고 지금 것을 바꾼다.
		post = map[cur_y][cur_x];
		map[cur_y][cur_x] = pre;
		pre = post;
		//다음 next는?
		if(!isInside(cur_y-a_dy[i],cur_x+a_dx[i])){
			i++;
		}
		
		cur_y -= a_dy[i];
		cur_x += a_dx[i];
		
		
		
	}
}

int main(){
	cin >> R >> C >> T;
	for(int i = 0; i < R; i++){
		for(int j = 0; j < C; j++){
			cin >> map[i][j];
			if(map[i][j] == -1){
				if(!a1){//공기청정기 윗 y좌표 (x좌표는 0)
					a1 = i;
					a2 = i+1;
				}
			}
		}
	}
	while(T--){
		SPREAD();
		AIR();
	}
	int result = 0;
	for(int i = 0; i < R; i++){
		for(int j = 0; j < C; j++){
			if(map[i][j] > 0){
				result +=  map[i][j];
			}
			
		}
	}
	cout << result;
	return 0;
}