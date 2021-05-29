//11399번 ATM
//이유는 모르겠지만 그리디 문제. 매 순간 최선의 정답을 저장하자.
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	int N;
	int sum = 0;
	int result = 0;
	cin >> N;
	vector<int> p_v;
	vector<int> result_v;
	for(int i = 0; i < N; i++){
		int num;
		cin >> num;
		p_v.push_back(num);
	}
	sort(p_v.begin(), p_v.end());
	
	for(int i = 0; i < N; i++){
		sum += p_v[i];
		result_v.push_back(sum);
	}
	
	for(int i = 0; i < N; i++){
		result += result_v[i];
	}
	
	cout << result;
	return 0;
}