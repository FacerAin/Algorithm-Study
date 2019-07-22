//1924번 2007년
#include <stdio.h>

int main(void) {
	int mon, day,sum;
	sum = 0;
	scanf("%d %d",&mon,&day);
	int month[] = {31,28,31,30,31,30,31,31,30,31,30,31};
	char *result_day[] = {"SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT"}; 
	for(int i=1;i<mon;i++){
		sum += month[i-1];
	}
	printf("%s",result_day[(sum+day)%7]);
	return 0;
}
