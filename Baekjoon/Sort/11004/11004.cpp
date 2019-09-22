//11004번 K번째 수
#include <cstdio>
#include <algorithm>
using namespace std;
int arr[5000001];
int main(){
    int N,K;
    scanf("%d %d",&N,&K);
    for(int i = 0; i < N; i++){
        scanf("%d",&arr[i]);
    }
    nth_element(arr,arr+(K-1),arr+N);
    printf("%d", arr[K-1]);
    return 0;


}