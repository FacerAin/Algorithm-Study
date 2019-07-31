//10809번 알파벳 찾기
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
    string s;
    cin >> s;
    for(int i='a';i<='z';i++){
        auto it = find(s.begin(),s.end(),i);
        if(it == s.end()){
            cout << -1 << ' ';
        }
        else{
            cout << (it-s.begin()) << ' ';
        }
    }
    return 0;
}