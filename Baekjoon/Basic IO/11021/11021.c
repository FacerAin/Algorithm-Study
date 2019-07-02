//11021 A+B -7
#include <stdio.h>

int main(void) {
	int num;
	int a,c;
	char b;
	scanf("%d",&num);
	for(int i = 0; i<num;i++){
		scanf("%d%c%d",&a,&b,&c);
		printf("Case #%d: %d\n",i+1,a+c);
	}
	
	

}
