//10815번 숫자카드
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> v;
int main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int N;
	cin >> N;
	v.resize(N);
	for(int i = 0; i < N; i++){
		cin >> v[i];
	}
	
	sort(v.begin(),v.end());
	
	int M;
	cin >> M;
	for(int i = 0; i < M; i++){
		int num;
		cin >> num;
		if(binary_search(v.begin(),v.end(),num)){
			cout << 1 << " ";
		}else{
			cout << 0 << " ";
		}
	}
	return 0;
}