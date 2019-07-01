//1699 제곱수의 합
#include <stdio.h>

int main(void) {
	// your code goes here
	int data;
	int ans;
	scanf("%d",&data);
	int d[100000];
	for(int i = 1;i<=data;i++){
		d[i] = i;
		for (int j=1;j*j<=i;j++){
			if(d[i] > d[i-j*j]+1){
				d[i] = d[i-j*j]+1;
			}
		}
		ans = d[i];
		
		
	}
	printf("%d",ans);
	return 0;
}
