//1712번 손익분기점
#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int A,B,C;
    int n = 0;
    cin >> A >> B >> C;
    if((A/(C-B))>0){
        cout << floor(A/(C-B))+1;
    }
    else{
        cout << -1;
    }
    return 0;
}