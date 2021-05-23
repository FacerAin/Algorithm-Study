//1074번 Z


// 분할정복 문제
// 기저와 종료조건은?


//탐색할 필요 없는 가지는 버리자 => 가지치기.

#include <iostream>
#include <cmath>
using namespace std;
int N,r,c;
int cnt;
int dx[] = {0,1,0,1};
int dy[] = {0,0,1,1};
void search(int num, int row, int col){
	if(num == 2){
		for(int i = 0; i < 4; i++){
			if(dy[i] + row == r && dx[i] + col == c){
				cout << cnt;
				exit(0);
			}
			cnt++;
		}
		return;
	}
	if(row+num/2 > r && col+num/2 > c){
		search(num/2,row,col);
	}else{
		cnt += num/2 * num/2;
	}
	if(row+num/2 > r && col+num/2 <= c){
		search(num/2,row,col+num/2);
	}else{
		cnt += num/2 * num/2;
	}
	if(row+num/2 <= r && col+num/2 > c){
		search(num/2,row+num/2,col);
	}
	else{
		cnt += num/2 * num/2;
	}

	if(row+num/2 <= r && col+num/2 <= c){
			search(num/2,row+num/2,col+num/2);
	}
	else{
		cnt += num/2 * num/2;
	}
	
	
	
	

}
int main(){
	cnt = 0;
	cin >> N >> r >> c;
	search(pow(2,N),0,0);
	return 0;
}