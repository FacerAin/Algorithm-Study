//2346 풍선 터뜨리기
#include <iostream>
#include <vector>
using namespace std;

/*
단순 시뮬레이션으로도 풀 수 있는 문제
근데 왜 메모리초과가 나오는지 모르겠다.
*/
short map[1005];
int pt = 0;
int N;
int check_pt(){
	if(pt>=N){
		pt = pt - N;
	}
	if(pt<0){
		pt = N+pt;
	}
}

int main(){
	
	cin >> N;
	for(int i = 0; i < N; i++){
		cin >> map[i];
	}
	
	int cnt = 0;
	int b_num = map[0];
	cout << 1 << " ";
	map[0] = 0;
	for(int i = 0; i < N-1; i++){
		while(cnt != b_num){
			if(b_num>0){
				pt++;
				check_pt();
				if(map[pt] != 0){
					cnt++;
				}
			}else if(b_num < 0){
				pt--;
				check_pt();
				if(map[pt] != 0){
					cnt--;
				}
			}
		}
		cnt = 0;
		b_num = map[pt];
		map[pt] = 0;
		cout << pt+1 << " ";
		
	}

	return 0;
}