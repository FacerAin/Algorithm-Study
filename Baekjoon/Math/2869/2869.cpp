//2869번 달팽이는 올라가고 싶다
#include <iostream>
using namespace std;
int main(){
    long long A,B,V;
    cin >> A >> B >> V;

    cout << (V-B-1)/(A-B)+1; 
    return 0;
}