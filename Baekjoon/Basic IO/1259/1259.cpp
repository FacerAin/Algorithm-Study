//1259 펠린드롬 수

#include <iostream>
#include <string>
using namespace std;
int main() {
	string s;
	while(1) {
		cin >> s;
		if (s=="0"){
			break;
		}
		
		int s_len = s.size();
		bool flag = true;
		
		for (int i = 0; i < s_len/2; i++){
			if(s[i] != s[s_len-i-1]){
				flag = false;
				break;
			}
		}
		
		if (flag == true){
			cout << "yes" << endl;
		}else{
			cout << "no" << endl;
		}
	}
	
	
	return 0;
	
	
	
	
}