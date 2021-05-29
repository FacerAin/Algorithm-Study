//1697번 숨바꼭질
#include <iostream>
#include <vector>
#include <queue>
#include <string>
#include <utility>
using namespace std;
int N, K;
int map[100001];
int check[100001];
int SIZE = 100001;
//int dy[4] = {1,-1,0,0};
//int dx[4] = {0,0,1,-1};

queue<int> q;

//check [y, x] is in or not
bool isInside(int a){
    return (a >= 0 && a < SIZE);
}

//참고 https://blockdmask.tistory.com/182 [개발자 지망생]

void bfs(){
	int cur_x;
	while(!q.empty()){
		cur_x = q.front();
		q.pop();
		//cout << cur_x << endl;
		
		if(cur_x == K){ //Break Point
			return;
		}
		
		if(cur_x != 0 && isInside(cur_x * 2) && map[cur_x * 2] == 0){
			map[cur_x * 2] += map[cur_x] + 1; 
			q.push(cur_x * 2);
		}
		
		if(isInside(cur_x + 1) && map[cur_x + 1] == 0){
			map[cur_x + 1] += map[cur_x] + 1; 
			q.push(cur_x + 1);
		}
		if(isInside(cur_x - 1) && map[cur_x - 1] == 0){
			map[cur_x - 1] += map[cur_x] + 1; 
			q.push(cur_x - 1);
		}

		
		
		
		
	}
}
int main() {
	cin >> N >> K;
	q.push(N);
	bfs();
	/*
	for(int i = 0; i <10; i++){
		cout << map[i] << " ";
	}
	*/
	
	
	cout <<  map[K];

	return 0;
}