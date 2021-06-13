//5430 AC
#include <iostream>
#include <deque>
#include <string>
#include <algorithm>
using namespace std;



deque<int> split(string s, string divid) {
	deque<int> v;
	int start = 0;
	int d = s.find(divid);
	while (d != -1){
		v.push_back(stoi(s.substr(start, d - start)));
		start = d + 1;
		d = s.find(divid, start);
	} 
	v.push_back(stoi(s.substr(start, d - start)));

	return v;
}

void print(deque<int>& v){
	if(v.size() == 0){
		cout << "[]" << '\n';
		return;
	}
	cout << "[";
	int i = 0;
	for(auto iter = v.begin(); iter != v.end(); iter++){
		cout << *iter;
		if(i == v.size()-1){
			cout << "]";
		}else{
			cout << ",";
		}
			i++;
	}

	cout << '\n';
}

void rprint(deque<int>& v){
	if(v.size() == 0){
		cout << "[]" << '\n';
		return;
	}
	cout << "[";
	int i = 0;
	for(auto iter = v.rbegin(); iter != v.rend(); iter++){
		cout << *iter;
		if(i == v.size()-1){
			cout << "]";
		}else{
			cout << ",";
		}
			i++;
	}

	cout << '\n';
}

//https://notepad96.tistory.com/entry/c-%EB%AC%B8%EC%9E%90%EC%97%B4-%EB%82%98%EB%88%84%EA%B8%B0-string-split

int main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int T;
	cin >> T;
	while(T--){
		string p;
		int n;
		deque<int> v;
		string arr_s;
		cin >> p;
		cin >> n;
		cin >> arr_s;
		arr_s = arr_s.substr(1,arr_s.size()-1);
		if(n > 0){
			v = split(arr_s, ",");
		}
		


		
		int r_cnt = 0;
		bool direction = true; //true => front
		bool error_flag = false;
		for(int i = 0; i < p.size(); i++){
				
			if(p[i] == 'R'){
				direction = !direction;
			}
			if(p[i] == 'D'){
				if(v.empty()){
					error_flag = true;
					break;
				}
				if(direction){
					v.pop_front();
				}else{
					v.pop_back();
				}

				
			}
		}
		if(error_flag){
			cout << "error" << '\n';
		}else{
			if(direction){
			print(v);	
			}else{
				rprint(v);
			}
			
		}
	}
	
	return 0;
}