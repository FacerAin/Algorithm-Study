//1463번 1로 만들기
//dp bottom-up
#include <iostream>
#include <algorithm>
using namespace std;
int d[1000001];
int main(){
    int N;
    cin >> N;
    for(int i=2;i<=N;i++){
        d[i] = d[i-1] +1;
        if(i%2 == 0){
            arr[i] = min(arr[i],arr[i/2]+1);
        }
    }

    return 0;

}
