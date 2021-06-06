//11659 구간 합 구하기 4

//누적 합 개념 이해하자.
#include <iostream>

using namespace std;
int sum_arr[100005];
int main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int N,M;

	cin >> N >> M;
	for(int i = 1; i <= N; i++){
		int num;
		cin >> num;
		sum_arr[i] = sum_arr[i-1] + num;
	}
	
	for(int i = 0; i < M; i++){
		int a, b;
		cin >> a >> b;
		
		cout << sum_arr[b] - sum_arr[a-1] << '\n';
	}
	
}