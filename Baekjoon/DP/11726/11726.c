//11726 2*n 타일링 
#include <stdio.h>

int main(void) {
	int data;
	scanf("%d",&data);
	int d[1000];
	int ans;
	d[1] = 1;
	d[2] = 2;
	for(int i=3;i<=data;i++){

		d[i] = d[i-1] + d[i-2];
		d[i] %= 10007;
	}
	ans = d[data];
	printf("%d",ans);
	return 0;
}
