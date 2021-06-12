//6603 로또
//dfs의 스택 성질을 활용하여 푸는 방법도 있다!
//참고: https://penglog.tistory.com/95 prev_permutation 사용법
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	
	while(1){
		int N;
		cin >> N;
		if(N == 0){
			return 0;
		}
		vector<int> v(N);
		for(int i = 0; i < N; i++){
			cin >> v[i];
		}
		vector<bool> comb(N, false);
		
		for(int i = 0; i < 6; i++){
			comb[i] = true;
		}
		do {
            for (int i = 0; i < N; i++)
			{
				if (comb[i]){
					cout << v[i] << ' ';
				}
			}
            cout << '\n';
        } while (prev_permutation(comb.begin(), comb.end()));
		
		cout << '\n';
	}

	
}