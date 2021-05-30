//1620 나는야 포켓몬 마스터 이다솜
//데이터 저장 구조 이해할 것
//stl map 활용잘하기
#include <iostream>
#include <string>
#include <algorithm>
#include <map>
#include <vector>
using namespace std;
map<string, int> v1;
vector<string> v2;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	vector<string> dict_v;
	vector<string> search_v;
	int N, M;
	cin >> N >> M;
	string s;
	for(int i = 0; i < N; i++){
		cin >> s;
		v1.insert(pair<string, int>(s,i));
		v2.push_back(s);
		
	}
	while(M--){
		cin >> s;
		if(s[0] >= '0' && s[0] <='9'){
			cout << v2[stoi(s) - 1] << '\n';
		}
		else{
			cout << v1[s] + 1 << '\n';
		}
	}
	
	return 0;
}


