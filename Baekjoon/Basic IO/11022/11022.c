//11022 A+B -8
#include <stdio.h>

int main(void) {
	int num;
	int a,c;
	char b;
	scanf("%d",&num);
	for(int i = 0; i<num;i++){
		scanf("%d%c%d",&a,&b,&c);
		printf("Case #%d: %d + %d = %d\n",i+1,a,c,a+c);
	}
	
	

}
