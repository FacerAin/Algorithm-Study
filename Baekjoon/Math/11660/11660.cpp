//11660 구간 합 구하기 5
//행렬을 1치원 배열로 생각하자
#include <iostream>
using namespace std;
int sum[2000000];
	int N,M;
/*
(2,2) 부터
(3, 3)의 누적합은?
(x1,y1) ~ (x2,y2)

s(x2,y2) - s(x2-1,x2-1) ~  
*/
int convert(int y, int x){
	return (y-1)*N + (x-1);
}

int solve(int x1, int y1, int x2, int y2){
	int res = 0;
	for(int i = 0; i < y2 - y1 + 1; i++){
		/*

				cout << sum[convert(y1+i,x2)+1] << '\n';
		cout << sum[convert(y1+i,x1)] << '\n';
		cout << sum[convert(y1+i,x2)+ 1] - sum[convert(y1+i,x1)] << '\n';
		*/


		res += sum[convert(y1+i,x2)] - sum[convert(y1+i,x1)-1];
	}
	return res;
}
int main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	cin >> N >> M;
	for(int i = 1; i <= N; i++){
		for(int j = 1; j <= N; j++){
			int num;
			cin >> num;
			sum[convert(i,j)] = sum[convert(i,j)-1] + num;
		}
	}
	/*
	
		for(int i = 1; i <= N; i++){
		for(int j = 1; j <= N; j++){

			cout<< sum[convert(i,j)] << " ";
		}
			cout << '\n';
	}
	*/
	
	
	
	while(M--){
		int x1,x2,y1,y2;
		cin >> x1 >> y1 >> x2 >> y2;
		cout << solve(y1,x1,y2,x2) << '\n';
		
	}
	return 0;
}