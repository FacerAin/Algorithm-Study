//10992번 별 찍기 - 17
#include <stdio.h>
int main(void)
{
    int num;
    scanf("%d", &num);
    for(int i = 0; i<num-1; i++){
    	for(int j =0; j<num-i-1;j++){
    		printf(" ");
    	}
    	for(int k = 0; k<2*i+1;k++){
    		if(k==0||k==2*i){
    			printf("*");
    		}
    		else{
    			printf(" ");
    		}
    		
    	}
    	printf("\n");
    }
    for(int i =0;i<2*num-1;i++){
    	printf("*");
    }
    
    return 0;
}