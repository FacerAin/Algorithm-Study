//2745번 진법변환
#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main(){
    string s;
    int B;
    long long sum = 0;
    cin >> s;
    cin >> B;
    int len = s.size();
    for(int i=0;i<len;i++){
        if(s[i]>='0'&&s[i]<='9'){
            sum += pow(B,len-i-1)*(s[i]-'0');
        }
        else{
            sum += pow(B,len-i-1)*(s[i]-'A'+10);
        }
    }
    cout << sum;
    return 0;

}