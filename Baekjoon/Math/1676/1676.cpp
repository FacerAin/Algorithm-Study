//1676 팩토리얼 0의 개수
//좀 더 효율적으로 풀 수 있다!
#include <iostream>
#include <algorithm>
using namespace std;

int get_two_num(int num){
	int two_num = 0;
	while(num % 2 == 0){
		num /= 2;
		two_num++;
	}
	return two_num;
}

int get_five_num(int num){
	int five_num = 0;
	while(num % 5 == 0){
		num /= 5;
		five_num++;
	}
	return five_num;
}

int main(){
	int N;
	cin >> N;
	
	int two_num = 0;
	int five_num = 0;
	for(int i = 1; i <= N; i++){
		two_num += get_two_num(i);
		five_num += get_five_num(i);
	}
	cout << min(two_num,five_num);
	
}