//1780 종이의 개수
//행렬 풀때 x,y 구분 잘하자.
#include <iostream>

using namespace std;
int N;
int map[3000][3000];

int z_num = 0;
int m_num = 0;
int p_num = 0;

void solve(int num, int x, int y){
	int flag_num = map[y][x];
	bool flag = true;
	if(num >= 3){
		for(int i = y; i < y+num; i++){
		for(int j = x; j < x+num; j++){
			if(flag_num != map[i][j]){
				flag = false;
				break;
			}
		}
	}
	}



	
	if(flag){
		if(flag_num == 0){
			z_num++;
		}else if(flag_num == 1){
			p_num++;
		}else if(flag_num == -1){
			m_num++;
		}
		return;

		
		
	}else{
		int div = num/3;
		solve(div,x,y);
		solve(div,x+div,y);
		solve(div,x+2*div,y);
		solve(div,x,y+div);
		solve(div,x,y+2*div);
		solve(div,x+div,y+div);
		solve(div,x+2*div,y+div);
		solve(div,x+div,y+2*div);
		solve(div,x+2*div,y+2*div);
	}
}

int main(){
	cin >> N;
	for(int i = 0; i < N; i++){
		for(int j = 0; j < N; j++){
			cin >> map[i][j];
		}
	}
	solve(N,0,0);
	cout << m_num << endl << z_num << endl << p_num;
}