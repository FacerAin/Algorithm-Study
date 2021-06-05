//17219번 비밀번호 찾기
#include <iostream>
#include <string>
#include <map>
#include <vector>

using namespace std;

int main(){
	int N, M;
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	map<string, string> m;
	cin >> N >> M;
	for(int i = 0; i < N; i++){
		string s, p;
		cin >> s >> p;
		m[s] = p;
	}
	
	for(int i = 0; i < M; i++){
		string s;
		cin >> s;
		cout << m[s] << '\n';
	}
	
	return 0;
}
