//1654 랜선 자르기
//이분 탐색을 이용하여 탐색하는 문제
//탐색 기준과 로직을 어떻게 짤 것인가? 헷갈리는 문제
//long long 자료형 주의할 것

#include <iostream>
#include <string>
using namespace std;
int lan_arr[10005];
int K, N;

bool check(long long mid){

	int num = 0;
	for(int i =0; i < K; i++){
		num += lan_arr[i]/mid;
	}
	if(num >= N){
		return true;
	}else{
		return false;
	}
}

int main() {	
	//조건 입력

	cin >> K >> N;
	
	int max = 0;
	for (int i = 0; i < K; i++){
		cin >> lan_arr[i];
		if (max < lan_arr[i]){
			max = lan_arr[i];
		}
	}
	
	
	long long start, end; //이분 검색 조건
	
	start = 1;
	end = max;
	
	long long result = 0;
	
	
	
	while (start <= end){ //start가 end를 역전할 때 탐색 종료
		long long mid = (start + end) / 2;
		if(check(mid)){
			if(result < mid){
				result = mid;
			}
			start = mid+1;
		}else{
			end = mid-1;
		}
	}
	
	cout << result;

	return 0;
	
}