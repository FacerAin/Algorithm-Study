//1037 약수
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<long long> v;
int main(){
	int N;
	cin >> N;
	v.resize(N);
	for(int i = 0; i < N; i++){
		cin >> v[i];
	}
	sort(v.begin(), v.end());
	cout << v[0] * v[N-1];
	return 0;
}