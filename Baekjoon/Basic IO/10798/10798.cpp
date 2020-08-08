#include <iostream>
#include <string>
#include <vector>
using namespace std;
vector<string> v(5);
int main()
{

    v.clear();
    int pline = 0;

    for (int i = 0; i < 5; i++)
    {
        cin >> v[i];
    }
    for (int i = 0; i < 16; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (v[j].length() > pline)
            {
                cout << v[j][pline];
            }
        }
        pline++;
    }

    return 0;
}
