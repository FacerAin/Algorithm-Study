//2609번 최대공약수와 최소공배수
#include <iostream>
using namespace std;
/*
int gcd(int a,int b){
    return !b ? a : gcd(b,a%b); 
}
*/
int gcd(int a,int b){
    int r;
    while(b!=0){
        r = a%b;
        a = b;
        b = r;
    }
    return a;
}
int lcm(int a,int b, int g){
    return a*b/g;
}
int main(){
    int a, b;
    cin >> a >> b;
    int g = gcd(a,b);
    int l =  lcm(a,b,g);
    cout << g << endl;
    cout << l << endl;


    return 0;
    
}