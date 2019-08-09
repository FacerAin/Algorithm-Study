//15596번 정수 N개의 합
#include <vector>
using namespace std;
long long sum(vector<int> &a) {
	long long ans = 0;
    for(vector<int>::iterator itr = a.begin(); itr != a.end(); itr++){
        ans += *itr;
    }
	return ans;
}
