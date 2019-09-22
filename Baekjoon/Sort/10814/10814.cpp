//10814번 나이순 정렬
#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;
struct Data
{
    int age;
    string name;
};
bool cmp(const Data &u, const Data &v)
{
    return u.age < v.age;
}
int main()
{
    int N;
    cin >> N;
    vector<Data> d(N);
    for (int i = 0; i < N; i++)
    {
        cin >> d[i].age >> d[i].name;
    }
    stable_sort(d.begin(), d.end(), cmp);
    for (int i = 0; i < N; i++)
    {
        cout << d[i].age << ' ' << d[i].name << '\n';
    }

    return 0;
}