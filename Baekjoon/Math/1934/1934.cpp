//1934번 최소공배수
#include <iostream>
using namespace std;
int gcd(int a,int b){
    int r;
    while(b!=0){
        r = a%b;
        a = b;
        b = r;
    }
    return a;
}
int lcm(int a,int b){
    return a*b/gcd(a,b);
}
int main(){
    int T,a,b;
    cin >> T;
    while(T--){
        cin >> a >> b;
        cout << lcm(a,b) << endl;;
    }
    return 0;
}