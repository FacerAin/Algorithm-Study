//10818번 최소,최대
#include <stdio.h>

int main(void) {
	int cnt,num,max,min;
	scanf("%d",&cnt);
	scanf("%d",&num);
	max = num;
	min = num;
	for(int i=0;i<cnt;i++){
		scanf("%d",&num);
		if(max < num){
			max = num;
		}
		if( min > num){
			min = num;
		}
	}
	printf("%d %d",min,max);
	return 0;
}
