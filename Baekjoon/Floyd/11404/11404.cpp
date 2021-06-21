//11404 플로이드
//플로이드 와샬 활용 문제
#include <iostream>
#include <algorithm>
int map[105][105];
using namespace std;
int n, m;
int MAX = 999999999;
int main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	cin >> n;
	cin >> m;
	
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++){
			if(i==j){
				map[i][j] = 0;
			}else{
				map[i][j] = MAX;
			}
		}
	}
	
	for(int i = 0; i < m; i++){
		int a, b, c;
		cin >> a >> b >> c;
		map[a][b] = min(map[a][b] , c);
	}
	
	
	
	
	
	for(int k = 1; k <=n; k++){
	for(int i = 1; i <=n; i++){
		for(int j = 1; j <= n; j++){
			
				map[i][j] = min(map[i][k] + map[k][j], map[i][j]);
			}
		}
	}
	
	for(int i = 1; i <=n; i++){
		for(int j = 1; j <= n; j++){
			if(map[i][j] == MAX){
				cout << 0 << " ";
			}else{
				cout << map[i][j] << " ";
			}
		}
		cout << '\n';
	}
	
	
	return 0;
}