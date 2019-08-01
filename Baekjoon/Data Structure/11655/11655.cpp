//11655번 ROT13
#include <iostream>
#include <string>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    int len = s.length();
    for(int i=0;i<len;i++){
        if(s[i]>='a'&&s[i]<='m'){
            s[i] = s[i] + 13;
        }
        else if(s[i]>='A'&&s[i]<='M'){
            s[i] = s[i] + 13;
        }
        else if(s[i]>='n'&&s[i]<='z'){
            s[i] = s[i] - 13;
        }
        else if(s[i]>='N'&&s[i]<='Z'){
            s[i] = s[i] - 13;
        }
    }
    cout << s;
    return 0;
}