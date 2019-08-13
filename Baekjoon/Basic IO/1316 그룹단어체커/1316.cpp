//1316번 그룹단어체커
#include <iostream>
#include <string>
using namespace std;
bool checker(){
    string s;
    cin >> s;
    int arr[26]={0};
    int len = s.size();
    for(int i=0;i<len;i++){
        if(s[i]!=s[i+1]){
            if(arr[s[i]-97]!=0){
                return false;
            }
            else{
            arr[s[i]-97] += 1;
            }
        }
    }
    return true;
}
int main(){
    int N;
    cin >> N;
    int cnt = 0;
    while(N--){
        if(checker()){
            cnt ++;
        }
    }
    cout << cnt;
    return 0;
}