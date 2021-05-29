//1764 듣보잡
//stl 유용하게 사용하자 sort, binary_search
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int N;
	int M;
	vector<string> v;
	vector<string> result_v;
	cin >> N >> M;
	for(int i = 0; i < N; i++){
		string s;
		cin >> s;
		v.push_back(s);
	}
	sort(v.begin(), v.end());
	for(int i = 0; i < M; i++){
		string s;
		cin >> s;
		if(binary_search(v.begin(),v.end(),s)){
			result_v.push_back(s);
		}
	}
	
	sort(result_v.begin(),result_v.end());
	cout << result_v.size() << '\n';
	for(int i = 0; i < result_v.size(); i++){
		cout << result_v[i] <<  '\n';
	}
	
	return 0;
}