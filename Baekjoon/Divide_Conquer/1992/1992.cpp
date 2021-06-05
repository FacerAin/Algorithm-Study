//1992번 쿼드트리
//분할정복법 문제

#include <iostream>
#include <string>
using namespace std;
int N;
int map[64][64];
string ans;
void search(int num, int x, int y){
	int sum = 0;
	for(int i = y; i < y+num; i++){
		for(int j = x; j < x+num; j++){
			if(map[i][j] == 1){
				sum++;
				
			}
			
		}
	}

	if(sum == 0){
		ans += "0";
		return;
	}else if(sum == num*num){
		ans += "1";
		return;
	}
	ans += "(";
	search(num/2, x , y);
	search(num/2, x+num/2 , y);
	search(num/2, x , y+num/2);
	search(num/2, x+num/2 , y+num/2);
	ans += ")";
	
}
int main(){
	cin >> N;
	for(int i = 0; i < N; i++){
		string s;
		cin >> s;
		for(int j = 0; j < N; j++){
			map[i][j] = int(s[j]) - 48;
		}
	}

	
	search(N, 0, 0);
	
	cout << ans;
	
}