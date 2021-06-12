//10867 중복 빼고 정렬하기
//set을 사용하면 유용한 문제
#include <iostream>
#include <set>

using namespace std;
set<int> s;
int main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int N;
	cin >> N;
	for(int i = 0; i < N; i++){
		int num;
		cin >> num;
		s.insert(num);
	}
	
	for(auto iter = s.begin(); iter != s.end(); iter++){
        cout << *iter << " " ;
    }

}