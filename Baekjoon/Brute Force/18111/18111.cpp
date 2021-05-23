//18111번 마인크래프트
#include <iostream>
#include <vector>
using namespace std;

/*
How to solve.
제거하는데는 2초
추가하는데는 1초

추가하는 작업이 유리하다.
우선 순위 인벤토리 체크 -> 추가 -> 안되면 제거
하는 방향으로.

가장 낮은 층을 신경써야 하는가
가장 높은 층을 신경써야 하는가
현재 기준 층을 잡는 것이 중요할 듯

땅의 높이가 가장 높은 것이 우선이 되어야 한다.

이차원 배열 말고 일차원 배열로 생각해볼까?
땅의 위치는 크게 중요하지 않다.

땅의 높이와 너비가 그리 크진 않다.=> 브루트포스로 접근해보자.
//


참고
https://codecollector.tistory.com/678

*/
	
int main() {
	int N, M, B;
	cin >> N >> M >> B;
	int map[500][500];
	for(int i = 0; i < N; i++){
		for(int j = 0; j < M; j++){
			cin >> map[i][j];
		}
	}
	
	int min_time = 999999999;
	int max_height = 0;
	for(int h = 0; h <= 256; h++){
		int build = 0;
		int remove = 0;
		for(int i = 0; i < N; i++){
			for(int j = 0; j < M; j++){
				if(h - map[i][j] > 0){
					build += h - map[i][j];
				}else{
					 remove += map[i][j] - h;
				}
		}

	}
	if(remove + B >= build){
			int time = 2* remove + build;
			if(min_time >= time){
				min_time = time;
				max_height = h;
			}
		}
		
	}
	
	cout << min_time << " " << max_height;
	
	
	return 0; 
	
}