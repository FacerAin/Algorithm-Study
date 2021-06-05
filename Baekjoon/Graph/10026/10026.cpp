//10026 적록색약
//그래프 탐색을 간단하게 응용한 문제.
//2차원 배열을 함수 인자로 넘기는 방법
#include <iostream>
#include <string>
using namespace std;

int N;
bool isInside(int x, int y){
	return (x>=0 && x< N) && (y>=0&&y<N); 
}
void DFS(int map[][101], int x, int y, int num){
	map[y][x] = 0;
	if(isInside(x+1,y) && map[y][x+1] == num){
		DFS(map, x+1,y,num);
	}
	if(isInside(x,y+1) && map[y+1][x] == num){
		DFS(map, x,y+1,num);
	}
	if(isInside(x-1,y) && map[y][x-1] == num){
		DFS(map, x-1,y,num);
	}
	if(isInside(x,y-1) && map[y-1][x] == num){
		DFS(map, x,y-1,num);
	}
}


int main(){
	int map_rg[101][101];
	int map[101][101];
	int ans = 0;
	int ans_rg = 0;
	cin >> N;
	for(int i = 0; i < N; i++){
		string s;
		cin >> s;
		for(int j = 0; j < s.size(); j++){
			if(s[j] == 'R'){
				map[i][j] = 1;
				map_rg[i][j] = 1;
			}else if(s[j] == 'G'){
				map[i][j] = 2;
				map_rg[i][j] = 1;
			}else if(s[j]== 'B'){
				map[i][j] = 3;
				map_rg[i][j] = 2;
			}
		}
	}
	
	for(int i = 0; i < N; i++){
		for(int j = 0; j < N; j++){
			if(map[i][j]!=0){
				ans++;
				DFS(map, j, i,map[i][j]);
			}
			if(map_rg[i][j]!=0){
				ans_rg++;
				DFS(map_rg, j, i, map_rg[i][j]);
			}
		}
	}
	cout << ans << " " << ans_rg;
	return 0;
}
