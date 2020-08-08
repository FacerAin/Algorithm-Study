#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    int N;
    cin >> N;

    vector<pair<pair<int, int>, pair<int, string>>> v(N);
    for (int i = 0; i < N; i++)
    {
        cin >> v[i].second.second >> v[i].second.first >> v[i].first.second >> v[i].first.first;
    }
    sort(v.begin(), v.end());

    cout << v[N - 1].second.second << endl;
    cout << v[0].second.second << endl;
    return 0;
}