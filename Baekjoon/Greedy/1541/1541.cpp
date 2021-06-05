//1541 잃어버린 괄호
//https://jaimemin.tistory.com/504
//발상의 전환! 굳이 괄호치고 나누고 할 필요 없이 마이너스 뒤는 전부 빼주자.
#include <iostream>
#include <string>
#include <vector>
using namespace std;
string s;
vector<int> num_v;
int main(){
	cin >> s;
	string sub_s = "";
	bool minus_oper = false;
	int ans = 0;
	for(int i = 0; i < s.size()+1; i++){
		if(s[i] == '+' || s[i] == '-' || s[i] == '\0'){
			if(minus_oper){
				ans -= stoi(sub_s);
			}else{
				ans += stoi(sub_s);
			}
			sub_s = "";
			if(s[i] == '-'){
				minus_oper = true;
			}
		}else{
			sub_s += s[i];
		}
		
	}
	
	cout << ans;
	return 0;
}