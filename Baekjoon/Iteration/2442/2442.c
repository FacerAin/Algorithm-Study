//2442번 별 찍기 - 5
#include <stdio.h>
int main(void) {
	int num;
	scanf("%d",&num);
	for(int i = 0; i<num;i++){
		for(int j=0; j<num-i-1; j++){
			printf(" ");
		}
		for(int k = 0; k<2*(i)+1;k++){
			printf("*");
		}
		printf("\n");
	}


	return 0;
	

}