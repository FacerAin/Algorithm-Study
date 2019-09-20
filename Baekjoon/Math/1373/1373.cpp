//1373번 2진수 8진수 
//2 -> 10 -> 8이 안되는 이유는?
#include <iostream>
#include <string>
using namespace std;
int main(){
    string s;
    cin >> s;
    int len = s.size();
    if(len%3 == 1){
        cout << s[0];
    }
    else if(len%3 == 2){
        cout << (s[0]-'0')*2+(s[1]-'0');
    }
    for(int i=len%3;i<len;i+=3){
        cout << (s[i]-'0')*4 + (s[i+1]-'0')*2+(s[i+2]-'0');
    }
    return 0;
}