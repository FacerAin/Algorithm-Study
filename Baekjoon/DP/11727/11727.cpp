//11727번 2*n 타일링 2
#include <iostream>
using namespace std;
int d[1001];
int main(){
    int N;
    cin >> N;
    d[1] = 1;
    d[2] = 3;
    for(int i=3;i<=N;i++){
        d[i]= (2*d[i-2]+d[i-1])%10007;
    }
    cout << d[N];
    return 0;
}