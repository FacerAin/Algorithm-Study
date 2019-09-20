//2751번 수 정렬하기 2
#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int a[1000001];
    int n;
    cin >> n;
    for(int i =0; i<n;i++){
        scanf("%d",&a[i]);
    }
    sort(a,a+n);
    for(int i =0; i<n;i++){
        printf("%d\n",a[i]);
    }
    return 0;
}