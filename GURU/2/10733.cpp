//10773¹ø Á¦·Î
#include <iostream>
#include <vector>
using namespace std;

vector<int> v;
int main()
{
    int T;
    cin >> T;
    int num;
    while (T--)
    {
        cin >> num;
        if (num == 0)
        {
            v.pop_back();
        }
        else
        {
            v.push_back(num);
        }
    }
    long sum = 0;
    for (int i = 0; i < v.size(); i++)
    {
        sum += v[i];
    }
    cout << sum;
}