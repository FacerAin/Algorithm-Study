//10816번 숫자 카드 2
//lower_bound와 upper_bound를 묻는 문제
//이진 탐색의 개념을 정확히 이해하고 있어야 한다.
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> card_v;
int N, M;
int lower_bound(int target){
	int start = 0;
	int end = card_v.size();
	int mid;
	while(start < end){
		mid = (start + end) / 2;
		if(card_v[mid] < target){
			start = mid + 1;
		}else{
			end = mid;
		}
	}
	
	return end;
}

int upper_bound(int target){
	int start = 0;
	int end = card_v.size();
	int mid;
	while(start < end){
		mid = (start + end) / 2;
		if(card_v[mid] <= target){
			start = mid + 1;
		}else{
			end = mid;
		}
	}
	
	return end;
}

int main() {	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	
	int num;
	cin >> N;
	for(int i = 0; i < N; i++){

		cin >> num;
		card_v.push_back(num);
	}
	sort(card_v.begin(),card_v.end());
	
	cin >> M;
	
	for(int i = 0; i < M; i++){
		cin >> num;
		int lower = lower_bound(num);
		int upper = upper_bound(num);
		if(card_v[lower] != num){
			cout << 0;
		}else if(lower - upper == 0){
			cout << 1;
		}else{
			cout << upper-lower;
		}
		cout << " ";
		
	}
	
	
		
	
	return 0; 
	
}