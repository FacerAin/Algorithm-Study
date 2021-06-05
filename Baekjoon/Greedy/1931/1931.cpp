//1931 회의실 배정


#include <iostream>
#include <algorithm>
#include <vector>
#include <utility>
using namespace std;

bool cmp(const pair<int, int> &a, const pair<int, int> &b)
{
    if(a.second < b.second){
		return 1;
	}
	if(a.second == b.second){
		return a.first < b.first;
	}
	return 0;
}

int main(){
	int N, cnt;
	cnt = 0;
	vector<pair<int,int>> v;
	cin >> N;
	for(int i = 0; i < N; i++){
		int start, end;
		cin >> start >> end;
		v.push_back(pair<int,int>(start, end));
	}
	
	sort(v.begin(),v.end(),cmp);
	int start_time = 0;
	int end_time = 0;
	for(int i = 0; i < v.size(); i++){
		if(v[i].second >= end_time && v[i].first >= end_time){
			cnt++;
			end_time = v[i].second;
			start_time = v[i].first;
			//cout << start_time << " " << end_time << endl;
		}
		
	}
	cout << cnt;
	
}