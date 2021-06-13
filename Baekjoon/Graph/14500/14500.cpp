//14500번 테트로미노
//DFS 접근 방식 참신하다.
#include <iostream>
#include <algorithm>
using namespace std;
int N,M;
int map[505][505];
int check[505][505];
int ans = 0;

//ㅜ, ㅏ , ㅗ, ㅓ
int ey[4][4] = {{0, 0, 0, 1}, {0, 1, 2, 1}, {0, 0, 0, -1}, {0, -1, 0, 1}};
int ex[4][4] = {{0, 1, 2, 1}, {0, 0, 0, 1}, {0, 1, 2, 1}, {0, 1, 1, 1}};

int dy[] = {1,-1,0,0};
int dx[] = {0,0,1,-1};

bool isInside(int y,int x){
	return (x >= 0 && x < M) && (y >= 0 && y < N);
}
void dfs(int y, int x, int sum, int length){
	if(length >= 4){
		ans = max(ans, sum);
		return;
	}
	
	for(int i = 0; i < 4; i++){
		int next_y = y + dy[i];
		int next_x = x + dx[i];
		if(isInside(next_y, next_x) && !check[next_y][next_x]){
			check[next_y][next_x] = 1;
			dfs(next_y,next_x,sum + map[next_y][next_x],length+1);
			check[next_y][next_x] = 0;
		}
		
		
	}
}

void checkE(int y, int x){
	for(int i = 0; i < 4; i++){
		bool isIn = true;
		int sum = 0;
		for(int j = 0; j < 4; j++){
			int next_y = y + ey[i][j];
			int next_x = x + ex[i][j];
			
			if(!isInside(next_y,next_x)){
				isIn = false;
				break;
			}
			
			sum += map[next_y][next_x];
			
		}
		
		if(isIn){
			ans = max(sum,ans);
		}
	}
}

int main(){
	cin >> N >> M;
	for(int i = 0; i < N; i++){
		for(int  j = 0; j < M; j++){
			cin >> map[i][j];
		}
	}
	
	for(int i = 0; i < N; i++){
		for(int j = 0; j < M; j++){
			check[i][j] = 1;
			dfs(i,j,map[i][j],1);
			check[i][j] = 0;
			checkE(i,j);
		}
	}
	cout << ans;
	
	
	return 0;
}