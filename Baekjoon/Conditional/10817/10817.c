//10817번 세 수
#include <stdio.h>

int main(void) {
	int num,max,min,sum;
	scanf("%d",&num);
	sum = 0;
	max = num;
	min = num;
	sum += num;
	for(int i=0;i<2;i++){
		scanf("%d",&num);
		if(max < num){
			max = num;
		}
		if( min > num){
			min = num;
		}
		sum += num;
	}
	printf("%d", sum-max-min);
	return 0;
}