//1389번 케빈 베이컨의 6단계 법칙
//플루이드 와샬로 풀어보자.
#include <iostream>
#include <algorithm>
using namespace std;
int map[105][105];
int main(){
	int N,M;
	cin >> N >> M;
	ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

	for(int i = 0; i < M; i++){
		int a,b;
		cin >> a >> b;
		map[a][b] = 1;
		map[b][a] = 1;
	}
	
	for(int k = 1; k <= N; k++){
		for(int i = 1; i <= N; i++){
			for(int j = 1; j <= N; j++){
				if(i==j){
					continue;
				}else if(map[i][k] != 0 && map[k][j] != 0){
					if(map[i][j] == 0){
						map[i][j] = map[i][k] + map[k][j];
					}else{
						map[i][j] = min(map[i][j] , map[i][k] + map[k][j]);
					}
				}
				
			}
		}
	}
	int ans;
	int min = 9999999;
	for(int i = 1; i <= N; i++){
		int sum = 0;
		for(int j = 1; j <= N; j++){
			sum += map[i][j];
		}
		
		if(sum < min){
			min = sum;
			ans = i;
		}
	}
	
	cout << ans;
}