//10989번 수 정렬하기 3
#include <cstdio>
using namespace std;
int arr[10001];
int main(){
    int N;
    scanf("%d",&N);
    int num = 0;
    for(int i = 0; i < N; i++){
        scanf("%d",&num);
        arr[num]++;
    }
    for(int i = 1; i <= 10000;i++){
        if(arr[i]>0){
            for(int j = 0; j < arr[i]; j++){
                printf("%d\n",i);
            }
        }
    }
    return 0;
}