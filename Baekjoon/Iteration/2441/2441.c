//2441번 별 찍기 - 4
#include <stdio.h>
int main(void) {
	int num;
	scanf("%d",&num);
	for(int i = 0; i<num;i++){
		for(int j=0; j<i; j++){
			printf(" ");
		}
		for(int k = 0; k<num-i;k++){
			printf("*");
		}
		printf("\n");
	}


	return 0;
	

}