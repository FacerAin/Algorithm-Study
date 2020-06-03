#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector<char> v;
    string s;
    cin >> s;
    int len = s.size();
    for (int i = 0; i < len; i++)
    {
        v.push_back(s[i]);
    }
    sort(v.begin(), v.end());
    for (int i = len - 1; i >= 0; i--)
    {
        cout << v[i];
    }
    return 0;
}