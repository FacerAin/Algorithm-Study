//10250번 ACM 호텔
#include <iostream>
using namespace std;
int main(){
    int T;
    int H,W,N;
    int cnt_H,cnt_W;
    cin >> T;
    while(T--){
        cin >> H >> W >> N;
        cnt_H = 1;
        cnt_W = 1;
        for(int i=1; i<N;i++){
            cnt_H++;
            if(cnt_H>H){
                cnt_H = 1;
                cnt_W++;
            }
        }
        if(cnt_W/10==0){
            cout << cnt_H << 0 << cnt_W <<'\n';
        }
        else{
            cout << cnt_H << cnt_W <<'\n';
        }

    }
    return 0;
}