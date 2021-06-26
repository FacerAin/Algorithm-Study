//1918 후위표기식
//좀 더 생각해서 다시 풀어보자!
#include <iostream>
#include <string>
#include <stack>
using namespace std;
stack<char> st;

int main(){
	string s;
	cin >> s;
	for(int i = 0; i < s.size(); i++){
		cout << i << endl;
		if(s[i] >= 'A' && s[i] <= 'Z'){
			cout << s[i];
		}else{
			if(s[i] == ')'){
				while(1){
					char temp_s = st.top();
					st.pop();
					if(temp_s == '('){
						break;
					}else{
						cout << temp_s;
					}
				}
			}else{
				if(s[i] == '('){
					st.push(s[i]);
				}
				//연산자 우선순위 고려
				//우선순위가 높아질때
				//우선순위가 낮거나 같아질때
				else if(st.empty() || (s[i]=='*'||s[i]=='/') && (st.top()=='+'||st.top()=='-')){
					st.push(s[i]);
				}else{

						cout << st.top();
						st.pop();
						st.push(s[i]);
	
				}
				
			}
		}

	}
			while(!st.empty()){
			cout << st.top();
			st.pop();
		}
}