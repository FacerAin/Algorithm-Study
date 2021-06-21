//1043번 거짓말
//DFS 탐색으로 풀이
//리팩토링을 한다면?
/*
1. 파티 입력을 받음과 동시에 그래프를 만들 수 있다!
2. Union Find를 이용한 로직으로 작성 가능!
*/
#include <iostream>
#include <vector>
using namespace std;
int map[55][55];
int check[55];

int N, M;
vector<int> T_v;
void print_check(){
	for(int i = 1; i <= N; i++){
		cout << i << ": " << check[i] << endl;
	}
}

void print_map(){
	for(int i = 1; i <= N; i++){
		for(int j = 1; j <= N; j++){
			cout << map[i][j] << " ";
		}
		cout << '\n';
	}
}
void DFS(int v){
	check[v] = 1;
	for(int i = 1; i <= N; i++){
		if(map[v][i] == 1 && check[i] == 0){
			//cout << v << " " << i << endl;
			DFS(i);
		}
	}
}

int main(){
	
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	//입력을 받으면서
	//그래프를 만들자.
	cin >> N >> M;
	int t_num;
	cin >> t_num;
	for(int i = 0; i < t_num; i++){
		int num;
		cin >> num;
		T_v.push_back(num);
	}
	
	vector<vector<int>> P_v(M);
	//파티 기록은 어떻게?
	for(int i = 0; i < M; i++){
		int p_num;
		cin >> p_num;
		for(int j = 0; j < p_num; j++){
			int num;
			cin >> num;
			P_v[i].push_back(num);
		}
	}
	
	//그래프 만들기
	for(int i = 0; i < P_v.size(); i++){
		if(P_v[i].size() > 1){//원소가 두 개 이상이라면
			int a = P_v[i][0];
			for(int j = 1; j < P_v[i].size(); j++){
				int b = P_v[i][j];
				//원소들에 간선 연결
				map[a][b] = 1;
				map[b][a] = 1;
			}
		}
	}
	
	//그래프 탐색하기
	for(int i = 0; i < T_v.size(); i++){
		//cout << T_v[i] << endl;
		DFS(T_v[i]);
	}
	
	int ans = 0;
	
	//print_check();
	//print_map();
	
	//파티 검사
	for(int i = 0; i < P_v.size(); i++){
		bool flag = true;
		for(int j = 0; j < P_v[i].size(); j++){
			if(check[P_v[i][j]]){
				flag = false;
				break;
			}
		}
		if(flag){
			ans++;
		}
	}
	
	cout << ans;
	
	return 0;
}