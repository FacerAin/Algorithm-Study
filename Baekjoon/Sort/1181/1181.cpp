#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;
bool comp(string &s1, string &s2)
{
    if (s1.size() == s2.size())
    {
        return s1 < s2;
    }
    return s1.size() < s2.size();
}
int main()
{
    int N;
    cin >> N;
    string str;
    vector<string> v;
    for (int i = 0; i < N; i++)
    {
        cin >> str;
        v.push_back(str);
    }

    sort(v.begin(), v.end(), comp);

    vector<string>::iterator iter;
    vector<string>::iterator end_iter;

    end_iter = unique(v.begin(), v.end()); //중복 제거, 중복 제거되어도 size는 동일하기 때문에 마지막 end_iter를 받아옴
    for (iter = v.begin(); iter != end_iter; iter++)
    {
        cout << *iter << endl;
    }
    return 0;
}