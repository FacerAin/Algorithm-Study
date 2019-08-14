//2292번 벌집
#include <iostream>
using namespace std;
int main(){
    int N;
    long long tmp,cum,cnt;
    tmp = 1;
    cum = 0;
    cnt = 1;

    cin >> N;
    while(1){
        if(cum>=N){
            break;
        }
        else{
            tmp = 6*cnt;
            cum += tmp;
            cnt++; 
        }
    }
    cout << cnt;
    return 0;
}