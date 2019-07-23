//2884번 알람 시계
#include <stdio.h>

int main(void) {
	int H,M,MIN;
	scanf("%d",&H);
	scanf("%d",&M);
	MIN = (H*60) + M;
	if((MIN-45)>0){
	printf("%d ",(MIN-45)/60);
	printf("%d",(MIN-45)%60);
	}
	else if((MIN-45)==0){
		printf("0 0");
	}
	else{
		printf("23 ");
		printf("%d\n",(15+(MIN%60)));
	}
	
	return 0;
}
