//10953 A+B -6
#include <stdio.h>

int main(void) {
	int num;
	int a,c;
	char b;
	scanf("%d",&num);
	for(int i = 0; i<num;i++){
		scanf("%d%c%d",&a,&b,&c);
		printf("%d\n",a+c);
	}
	
	

}
