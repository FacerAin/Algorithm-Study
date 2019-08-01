//10820번 문자열 분석
#include <iostream>
#include <string>
using namespace std;
int main(){
    string s;
    while(getline(cin,s)){
        int low = 0;
        int up = 0;
        int num = 0;
        int blank = 0;
        for(int i=0;i<s.length();i++){
            if(s[i]>='a'&&s[i]<='z'){
                low++;
            }
            else if(s[i]>='A'&&s[i]<='Z'){
                up++;
            }
            else if(s[i]>='0'&&s[i]<='9'){
                num++;
            }
            else{
                blank++;
            }
        }
        cout << low << ' ' << up << ' ' << num << ' ' << blank << endl;
    }
    return 0;
}