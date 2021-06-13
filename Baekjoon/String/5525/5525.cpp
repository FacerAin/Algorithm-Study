//5525 IOIOI
//완성한 문자열과 TC의 부분 문자열들과 비교하는 방식은 비효율적이다.
#include <string>
#include <iostream>
using namespace std;
/*
string make_string(int n){
	string s;
	s += "I";
	for(int i = 0; i < n; i++){
		s += "OI";
	}
	
	return s;
}
*/
int main(){
	int N;
	cin >> N;
	int M;
	cin >> M;
	string s;
	cin >> s;
	
	int start = 0;
	int end = 2*N + 1;
	int ans = 0;
	int p_cnt = 0;
	for(int i = 1; i < M - 1; i++){
		if(s[i-1] == 'I' && s[i] == 'O' && s[i+1] == 'I'){
			p_cnt++;
			if(p_cnt == N){
				p_cnt--;
				ans++;
				
			}
			i++;
		}else{
			p_cnt = 0;
		}
	}
	cout << ans;
	
	return 0;
}