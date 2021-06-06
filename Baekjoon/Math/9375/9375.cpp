//9375 패션왕 신해빈
#include <iostream>
#include <string>
#include <map>
using namespace std;

int main(){
	int T, n;
	cin >> T;
	while(T--){
		map<string, int> m;
		cin >> n;
		for(int i = 0; i < n; i++){
			string cloth, category;
			cin >> cloth >> category;
			if(m.find(category) != m.end()){//카테고리가 이미 있다면
				m[category] += 1;
			}else{
				m.insert(pair<string,int>(category,1));
			}
		}
		int result = 1;
		for(auto it = m.begin(); it != m.end(); it++){
			result *= it->second + 1;
		}
		cout << result - 1 << '\n';
	}
	return 0;
}