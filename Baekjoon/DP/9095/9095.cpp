//9095번 1,2,3 더하기
#include <iostream>
using namespace std;
int d[12];
int main(){
    int T,N;
    cin >> T;
    d[0] = 0;
    d[1] = 1;
    d[2] = 2;
    d[3] = 4;
    for(int i=4;i<=11;i++){
        d[i] = d[i-1]+d[i-2]+d[i-3];
    }
    while(T--){
        cin >> N;
        cout << d[N] << '\n';
    }
    return 0;
}