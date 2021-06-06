//2447 별찍기 - 10
//분할정복을 이용한 별찍기
//패턴을 파악하면 쉽다. 근데 뭔가 풀기 싫은 문제
//다음에 내힘으로 다시 풀어보자!
//https://codesyun.tistory.com/75
#include <iostream>
using namespace std;

void star(int i, int j, int n) {
	if (i / n % 3 == 1 && j / n % 3 == 1) {
		cout << " ";
	}
	else if (n / 3 == 0) {
		cout << "*";
	}
	else {
		star(i, j, n / 3);
	}
}

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			star(i, j, n);
		}
		cout << '\n';
	}
}