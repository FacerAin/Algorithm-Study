#include <stdio.h>

int main(void) {
	int one,two,first,second,third;
	scanf("%d",&one);
	scanf("%d",&two);
	first = two%10;
	second = (two/10)%10;
	third = two/100;
	printf("%d\n",one*first);
	printf("%d\n",one*second);
	printf("%d\n",one*third);
	printf("%d\n",one*two);
	return 0;
}
