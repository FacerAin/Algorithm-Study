//11047 동전 0
//그리디

#include <iostream>
#include <vector>
using namespace std;

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int N, K;
	cin >> N >> K;
	int total = 0;
	int cnt = 0;
	vector<int> coin_v;
	for(int i = 0; i < N; i++){
		int num;
		cin >> num;
		coin_v.push_back(num);
	}
	
	total = K;
	for(int i = N - 1; i >=0; i--){
		if(total >= coin_v[i]){
			total -= coin_v[i];
			cnt++;
			i++;
		}
	}
	
	cout << cnt;
	return 0;
}