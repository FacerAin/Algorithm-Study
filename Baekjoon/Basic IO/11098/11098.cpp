#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n;
    int p;

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string player;
        int price;
        int max_price = 0;
        string max_player;
        cin >> p;
        for (int j = 0; j < p; j++)
        {
            cin >> price >> player;
            if (max_price < price)
            {
                max_price = price;
                max_player = player;
            }
        }
        cout << max_player << endl;
    }
    return 0;
}