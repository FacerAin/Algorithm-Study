//1110번 더하기사이클
#include <stdio.h>

int main(void) {
	int N,num,cnt;
	int a,b;
	scanf("%d",&N);
	num = N;
	cnt = 0;
	do{
		a = num/10;
		b = num%10;
		num = b*10 + (a+b)%10;

		cnt++;	

		
	}while(num != N);
	printf("%d",cnt);


	return 0;
}
