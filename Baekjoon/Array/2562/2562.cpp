//2562번 최댓값
#include <iostream>
using namespace std;
int main(){
    int num,max,index;
    index = 1;
    cin >> num;
    max = num;
    for(int i=1; i<9;i++){
        cin >> num;
        if(num>max){
            max = num;
            index = i+1;
        }
    }
    cout << max << endl << index;
    return 0;

}