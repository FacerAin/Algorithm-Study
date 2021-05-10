//4949 균형잡힌 세상
//스택 개념 이해하고 있으면 쉬운 문제
//getline 개념이 살짝 헷갈렸다.
#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<char> v_pair;

bool check(char s){
	if(s == '(' || s == '['){
		v_pair.push_back(s);
	}
	
	if(s == ')'){
		if(v_pair.back() == '('){
			v_pair.pop_back();
		}else if(v_pair.empty()){
			return false;
		}
		
		else if(v_pair.back() == '['){
			return false;
		}
	}
	
	if(s == ']'){
		if(v_pair.back() == '['){
			v_pair.pop_back();
		}else if(v_pair.empty()){
			return false;
		}
			
			else if(v_pair.back() == '('){
			return false;
		}
	}
		return true;
	
}


int main() {	
	string s;
	int s_len;

	bool flag = true;
	while(1){
		v_pair.clear();
		

		getline(cin, s);
		
		flag = true;
		if(s == "." || s == ""){
			break;
		}
		s_len = s.size();
		for(int i = 0; i < s_len; i++){
			if(!check(s[i])){
				flag = false;
			}
		}
		if(!flag || !v_pair.empty()){
			cout << "no" << endl;
		}
		else{
			cout << "yes" << endl;
		}

	}

	return 0;
	
}