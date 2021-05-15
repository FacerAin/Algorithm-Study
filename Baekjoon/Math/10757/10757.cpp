//10757번 큰 수 A+B
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {	
	string s1, s2;
	
	cin >> s1 >> s2;
	vector<int> result_v;
	
	int carry = 0;
	int num = 0;
	int s1_idx, s2_idx;
	
	s1_idx = s1.size() - 1;
	s2_idx = s2.size() - 1;
	
	while(s1_idx >= 0 || s2_idx >= 0){
		num = 0;
		if(s1_idx >= 0){
			num += int(s1[s1_idx]) - 48;
			s1_idx--;
		}
		
		if(s2_idx >= 0){
			num += int(s2[s2_idx]) - 48; 
			s2_idx--;
		}
		num += carry;

		if (num > 9){
			carry = 1;
			num -= 10;
		}else{

			carry = 0;
		}
		result_v.push_back(num);
		

		
	}
	if(carry > 0){
		result_v.push_back(carry);
	}

	
	int v_len = result_v.size() - 1;
	for (int i = v_len; i >= 0; i--){
		cout << result_v[i];
	}
	
	return 0; 
	
}