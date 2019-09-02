//10844번 쉬운 계단 수 
#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int N;
    long long d[101][10];
    long long sum = 0;
    cin >> N;
    for(int i=1; i<=9; i++){
        d[1][i] = 1;
    }
    for(int i=2; i<=N; i++){
        for(int j = 0; j <= 9; j++){
            d[i][j] = 0;
            if(j-1 >= 0){
                d[i][j] += d[i-1][j-1];
            }
            if(j+1 <= 9){
                d[i][j] += d[i-1][j+1];
            }
            d[i][j] %= 1000000000;
        }
    }
        for(int i=0; i<=9; i++){
         sum += d[N][i];
         sum %= 1000000000;
    }
    cout << sum;
    return 0;
}