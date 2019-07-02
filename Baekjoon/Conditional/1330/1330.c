//1330 두 수 비교하기
#include <stdio.h>

int main(void) {
	int a,b;
	scanf("%d",&a);
	scanf("%d",&b);
	if(a>b){
		printf(">");
	}
	else if(a<b){
		printf("<");
	}
	else {
		printf("==");
	}
	return 0;
}
