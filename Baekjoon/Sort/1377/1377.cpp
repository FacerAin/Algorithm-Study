//1377번 버블소트
#include <cstdio>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
    int N;
    int ans = 0;
    scanf("%d",&N);
    vector<pair<int,int>> p(N);
    for(int i =0; i < N; i++){
        scanf("%d",&p[i].first);
        p[i].second = i;
    }
    sort(p.begin(),p.end());
    for(int i= 0; i < N;i++){
        if(ans < p[i].second - i){
            ans = p[i].second - i;
        }
    }
    printf("%d",ans+1);
    return 0;
}