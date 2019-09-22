//11651번 좌표 정렬하기 2
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int N;
    cin >> N;
    vector<pair<int,int>> p(N);
    for(int i =0; i< N; i++){
        cin >> p[i].second >> p[i].first;
    }
    sort(p.begin(),p.end());
    for(int i =0; i< N; i++){
        cout << p[i].second << ' ' << p[i].first << '\n';
    }
    return 0;

}
