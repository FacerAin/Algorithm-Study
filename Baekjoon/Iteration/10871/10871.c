//10871번 X보다 작은 수
#include <stdio.h>
int main(void) {
	int N,X,num;
	scanf("%d",&N);
	scanf("%d",&X);
	for(int i=0;i<N;i++){
		scanf("%d",&num);
		if(num<X){
			printf("%d ",num);
		}
	}
	

	return 0;
	

}