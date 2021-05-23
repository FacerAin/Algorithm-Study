//1012번 유기농 배추


//dfs/bfs 문제
// 코드를 더 간단하게 할 수 있는 방법이 있을까?
#include <iostream>
using namespace std;
int map[55][55];
int N,M,K;
void dfs(int i, int j)
{
    map[i][j] = 0;

    if (i + 1 < N && map[i + 1][j] == 1) //��
    {
        dfs(i + 1, j);
    }
    if (i - 1 >= 0 && map[i - 1][j] == 1) //��
    {
        dfs(i - 1, j);
    }
    if (j + 1 < M && map[i][j + 1] == 1) //��
    {
        dfs(i, j + 1);
    }
    if (j - 1 >= 0 && map[i][j - 1] == 1) //��
    {
        dfs(i, j - 1);
    }
}


int main(){
	
	int T;
	cin >> T;
	while(T--){
		
		
		int cnt = 0;
		cin >> N >> M >> K;
		
		for(int i = 0; i < N; i++){
			for(int j = 0; j < M; j++){
				map[i][j] = 0;
			}
		}
		for(int i = 0; i < K; i++){
			int x,y;
			cin >> x >> y;
			map[x][y] = 1;
		}
		
		for(int i = 0; i < N; i++){
			for(int j = 0; j < M; j++){
				if(map[i][j]){
					dfs(i, j);
					cnt += 1;
				}
			}
		}
		cout << cnt << endl;
		
	}
	
	return 0;
}