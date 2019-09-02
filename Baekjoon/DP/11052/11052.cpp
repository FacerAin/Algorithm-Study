//11052번 카드 구매하기
#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int N;
    int p[1001];
    int d[1001];
    cin >> N;
    for(int i=1;i<=N;i++){
        cin >> p[i];
        for(int j=1;j<=i;j++)
        {
        d[i] = max(d[i],p[j]+d[i-j]);
        }
    }
    cout << d[N];
    return 0;
}