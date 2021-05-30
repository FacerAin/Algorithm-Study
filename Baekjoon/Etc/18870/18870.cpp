//18870 좌표 압축
//좌표 압축 -> 좌표 범위는 크나, 그 안의 좌표는 몇 개 없을 때 -> 메모리 공간을 절약하자.
//해당 좌표의 값을 그 값보다 작은 좌표값들의 개수로 대체한다
//벡터 중복 제거 방법
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
	int N;
	cin >> N;
	vector<int> v;
	for(int i = 0; i < N; i++){
		int num;
		cin >> num;
		v.push_back(num);
	}
	vector<int> cv(v);
	
	sort(cv.begin(), cv.end());
	cv.erase(unique(cv.begin(), cv.end()), cv.end());
	
	for(int i = 0; i < N; i++){
		cout << lower_bound(cv.begin(), cv.end(), v[i]) - cv.begin() << ' ';
	}
	return 0;
}