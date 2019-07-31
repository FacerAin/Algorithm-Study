//10808번 알파벳 개수
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
    string s;
    cin >> s;
    for(int i='a'; i <= 'z'; i++){
        cout << count(s.begin(),s.end(),i) << ' ';
    }
    return 0;

}