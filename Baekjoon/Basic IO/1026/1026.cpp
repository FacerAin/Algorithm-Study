//1026 보물
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> v1;
vector<int> v2;
int main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int N;
	cin >> N;
	for(int i = 0; i < N; i++){
		int num;
		cin >> num;
		v1.push_back(num);
	}
	for(int i = 0; i < N; i++){
		int num;
		cin >> num;
		v2.push_back(num);
	}
	
	sort(v1.begin(),v1.end());
	sort(v2.begin(),v2.end());
	int sum = 0;
	for(int i = 0; i < N; i++){
		sum += v1[i] * v2[N-i-1];
	}
	cout << sum;
	return 0;
}