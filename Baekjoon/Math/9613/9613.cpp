//9613번 GCD합
#include <iostream>
using namespace std;
int gcd(int a,int b){
    return !b ? a : gcd(b,a%b); 
}
int main(){
    int T,n,sum,cnt;
    int arr[101];
    cin >> T;
    while(T--){
        sum = 0;
        cin >> n;
        for(int i=0; i<n;i++){
            cin >> arr[i];
        }
        for(int i=0; i<n;i++){
            for(int j=0; j<n-i-1;j++){
                sum += gcd(arr[i],arr[i+j-1]);
                cnt ++;
            }
        }
        cout << sum << ' '<< cnt << '\n';
    }

    return 0;
}