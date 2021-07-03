//15686번 치킨 배달
#include <iostream>
#include <utility>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

vector<pair<int,int>> chicken;
vector<pair<int,int>> house;
int check[15];
vector<pair<int,int>> c_v;
int N, M;
int ANS = 99999999;
int get_distance(int y1, int x1, int y2, int x2){
	return abs(x1-x2) + abs(y1-y2);
}

void search(){
	int tot_distance = 0;
	for(int i = 0; i < house.size(); i++){
		int distance = 999999999;
		int h_y = house[i].first;
		int h_x = house[i].second;
		for(int j = 0; j < c_v.size(); j++){
			int c_y = c_v[j].first;
			int c_x = c_v[j].second;
			distance = min(distance, get_distance(c_y, c_x, h_y,  h_x));
		}

		tot_distance += distance;
	}


	
	ANS = min(tot_distance,ANS);
}
void choice(int idx, int cnt){
	if(cnt == M){
		search();
		return;
	}
	for(int i = idx; i < chicken.size(); i++){
		if(!check[i]){
			check[i] = 1;
			c_v.push_back(chicken[i]);
			choice(i,cnt+1);
			c_v.pop_back();
			check[i] = 0;
		}




	}
}

int main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	cin >> N >> M;
	for(int i = 0; i < N; i++){
		for(int j = 0; j < N; j++){
			int num;
			cin >> num;
			if(num == 1){
				house.push_back(make_pair(i,j));
			}else if(num == 2){
				chicken.push_back(make_pair(i,j));
			}
		}
	}
	choice(0,0);
	cout << ANS;
}