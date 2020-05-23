#include <iostream>
using namespace std;
int main()
{
    int burger[3];
    int drink[2];

    for (int i = 0; i < 3; i++)
    {
        cin >> burger[i];
    }
    for (int i = 0; i < 2; i++)
    {
        cin >> drink[i];
    }
    int min = 10000;
    for (int i = 0; i < 6; i++)
    {
        if (min > (burger[i / 2] + drink[i % 2] - 50))
        {
            min = (burger[i / 2] + drink[i % 2] - 50);
        }
    }

    cout << min;
}