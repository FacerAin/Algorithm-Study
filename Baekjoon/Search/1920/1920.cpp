//1920 수 찾기
//시간 초과 나올땐 입력/출력 방식도 신경쓰자
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int N, M;
vector<int> N_V;

bool binary_search(int num){
	int left = 0;
	int right = N_V.size() - 1;
	
	while (left <= right) {
		int mid = (left + right) / 2;
		if(N_V[mid] == num){
			return true;
		}else if(N_V[mid] > num){
			right = mid - 1;
		}else{
			left = mid + 1;
		}
	}
	return false;
}

int main() {	
	cin.tie(NULL); 
	ios::sync_with_stdio(false);
	cin >> N;
	for (int i =0; i < N; i++){
		int num;
		cin >> num;
		N_V.push_back(num);
	}
	sort(N_V.begin(),N_V.end());
	cin >> M;
	for (int i =0; i < M; i++){
		int num;
		cin >> num;
		if(binary_search(num)){
			cout << 1 << '\n';
		}else{
			cout << 0 << '\n';
		}
	}
	return 0;
	
}