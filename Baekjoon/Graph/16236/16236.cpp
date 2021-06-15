//16236번 아기상어
#include <iostream>
#include <queue>
#include <utility>
#include <vector>
using namespace std;
int N;
int map[25][25];
int check[25][25];

int dx[] = {0,-1,1,0};
int dy[] = {-1,0,0,1};

int level = 2;
int exp = 0;
int result = 0;
int min_len = 999;


vector<pair<int,int>> fish_v;
queue<pair<int,int>> q;

bool isInside(int a, int b){
    return (a >= 0 && a < N) && (b >=0 && b < N);
}

void ClearCheck(){
	for(int i = 0; i < N; i++){
		for(int j = 0; j < N; j++){
			check[i][j] = 0;
		}
	}
}

void BFS(){
	//1. BFS 탐색
	//2. 만약 가능한 먹이가 있다면?
	//3. 먹고 자리 바꿈 -> 다시 1번으로
	while(!q.empty()){
		int cur_y = q.front().first;
		int cur_x = q.front().second;
		q.pop();
		for(int i = 0; i < 4; i++){
			int next_y = cur_y + dy[i];
			int next_x = cur_x + dx[i];
			if(isInside(next_y,next_x) && check[next_y][next_x] == 0 && map[next_y][next_x] <= level){
				check[next_y][next_x] += check[cur_y][cur_x] + 1;
				if(map[next_y][next_x] > 0 && map[next_y][next_x] < level){//먹이 섭취
					//조건에 부합한다고 해서 바로 먹어서는 안된다.
					//최소 거리에 부합하는 애들을 저장하고 탐색이 끝난 후 우선 순위에 맞게 sort하자.
					if(fish_v.size() == 0){
						min_len = check[next_y][next_x];
					}
					if(min_len == check[next_y][next_x]){
						fish_v.push_back(pair<int,int>(next_y,next_x));
					}
					
					
					
					
					exp++;
					map[next_y][next_x] = 0;
					result += check[next_y][next_x];
					q = queue<pair<int,int>>();
					ClearCheck();

					if(exp >= level){//레벨업
						exp = 0;
						level++;
						cout << level <<  endl;
					}
					q.push(pair<int,int>(next_y,next_x));
					break;
				}
				
				q.push(pair<int,int>(next_y,next_x));
			}
		}
	}
}


int main(){
	cin >> N;
	for(int i = 0; i < N; i++){
		for(int j = 0; j < N; j++){
			cin >> map[i][j];
			if(map[i][j] == 9){
				cout << 999;
				q.push(pair<int,int>(i,j));
				map[i][j] = 0;
			}
			
		}
	}
	BFS();
	cout << result;
	
	
	
	return 0;
}