#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector<int> v;
    int N;
    cin >> N;
    int num;
    for (int i = 0; i < N; i++)
    {

        cin >> num;
        v.push_back(num);
    }
    sort(v.begin(), v.end());
    long long int sum;

    return 0;
}