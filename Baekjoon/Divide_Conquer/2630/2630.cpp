//2630 색종이 만들기
#include <iostream>
using namespace std;
int N;
int b_cnt = 0;
int w_cnt = 0;
int map[150][150];

void search(int num, int x, int y){

	int sum = 0;
	for(int i = y; i < y+num; i++){
		for(int j = x; j < x+num; j++){
			if(map[i][j] == 1){
				sum++;	
			}
			
		}
	}
	
	if(sum == num*num){
		b_cnt++;
		return;
	}else if(sum == 0){
		w_cnt++;
		return;
	}
	search(num/2,x,y);
	search(num/2,x+num/2,y);
	search(num/2,x,y+num/2);
	search(num/2,x+num/2,y+num/2);
	
}
int main(){
	cin >> N;
	for(int i = 0; i < N; i++){
		for(int j = 0; j < N; j++){
			cin >> map[i][j];
		}
	}
	
	search(N, 0, 0);
	cout << w_cnt << endl << b_cnt;
	return 0;
}