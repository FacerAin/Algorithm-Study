//2178 미로 탐색

//check 배열을 유용하게 사용해보자!
#include <iostream>
#include <vector>
#include <queue>
#include <string>
#include <utility>
using namespace std;
int N, M;
int map[101][101];
int check[101][101];
int dy[4] = {1,-1,0,0};
int dx[4] = {0,0,1,-1};


//check [y, x] is in or not
bool isInside(int a, int b){
    return (a >= 0 && a < N) && (b >=0 && b < M);
}

//참고 https://blockdmask.tistory.com/182 [개발자 지망생]

void bfs(int x, int y){

	int cur_x, cur_y;
	queue<pair<int,int>> q;
	q.push(pair<int,int>(y,x));
	check[y][x] = 1;
	while(!q.empty()){
		cur_y = q.front().first;
		cur_x = q.front().second;
		q.pop();
		for(int i = 0; i < 4; i++){
			int next_x = cur_x+dx[i];
			int next_y = cur_y+dy[i];
			if(cur_y == N - 1 && cur_x == M - 1) //Break Point
			{
				break;
			}
			if(isInside(next_y,next_x) && check[next_y][next_x] == 0 && map[next_y][next_x] == 1){
				check[next_y][next_x] += check[cur_y][cur_x] + 1;
				q.push(pair<int,int>(next_y,next_x));
			}
		}
		
		
		
		
	}
}
int main() {
	cin >> N >> M;
	for(int i = 0; i < N; i++){
		string s;
		cin >> s;
		for(int j = 0; j < M; j++){
			map[i][j] = (int)s[j] - 48;
			check[i][j] = 0;
		}
		
		
	}
	bfs(0,0);
	cout << check[N-1][M-1];
	return 0;
}