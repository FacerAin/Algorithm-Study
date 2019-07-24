//2440번 별 찍기 - 3
#include <stdio.h>
int main(void) {
	int num;
	scanf("%d",&num);
	for(int i = 0; i<num;i++){
		for(int j=0; j<num-i; j++){
			printf("*");
 
		}
		printf("\n");
	}
 
 
	return 0;
 
 
}