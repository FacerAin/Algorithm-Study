//Beakjoon 11053 가장 긴 증가하는 부분수열
#include <stdio.h>

int main(void) {

	int data_num;
	
	scanf("%d",&data_num);
	int data[1000];
	for(int i = 0;i<data_num;i++){
		scanf("%d",&data[i]);


}
	int d[1000]; 
	
	for (int i=0;i<data_num;i++){
		d[i] = 1;
		for(int j=0;j<i;j++){
			if(data[j] < data[i] && d[i] < d[j]+1){
				d[i] = d[j]+1;
			}
		}
	}
	
	int max = d[0];
	for (int i=0;i<data_num;i++){
		if(max<d[i]){
			max = d[i];
		}
	}
	printf("%d",max);

	return 0;
}
