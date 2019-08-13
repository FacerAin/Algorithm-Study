//2675번 문자열반복
#include <iostream>
#include <string>

using namespace std;

int main(){
    int T,R,len;
    string S;
    cin >> T;
    while(T--){
        cin >> R >> S;
        int len = S.size();
        for(int i=0;i<len;i++){
            for(int j=0;j<R;j++){
                cout << S[i];
            }
            
        }
        cout << '\n';


    }
    return 0;
}