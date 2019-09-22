//10825번 국영수
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
struct Data
{
    int kor, eng, mat;
    string name;
};
bool cmp(const Data &u, const Data &v)
{
    if (u.kor > v.kor)
    {
        return true;
    }
    else if (u.kor == v.kor)
    {
        if (u.eng < v.eng)
        {
            return true;
        }
        else if (u.eng == v.eng)
        {
            if (u.mat > v.mat)
            {
                return true;
            }
            else if (u.mat == v.mat)
            {
                return u.name < v.name;
            }
        }
    }
    return false;
}
int main()
{
    int N;
    cin >> N;
    vector<Data> d(N);
    for (int i = 0; i < N; i++)
    {
        cin >> d[i].name >> d[i].kor >> d[i].eng >> d[i].mat;
    }
    sort(d.begin(), d.end(), cmp);
    for (int i = 0; i < N; i++)
    {
        cout << d[i].name << '\n';
    }

    return 0;
}