#include <iostream>
#include <algorithm>
using namespace std;
int arr[10];
int ans[10];
int main()
{
    int p1, p2, sum;
    for (int i = 0; i < 9; i++)
    {
        cin >> arr[i];
    }
    p1 = 0;
    p2 = 1;
    sum = 0;
    for (int i = 0; i < 8; i++)
    {
        for (int k = 0; k < 8 - i; k++)
        {
            sum = 0;
            for (int j = 0; j < 9; j++)
            {
                if (j != p1 && j != p2)
                {
                    sum += arr[j];
                }
            }
            if (sum == 100)
            {
                break;
            }
            else
            {
                p2++;
                if (p2 > 8)
                {
                    p1++;
                    p2 = p1 + 1;
                }
            }
        }
    }
    int j = 0;
    for (int i = 0; i < 9; i++)
    {
        if (i != p1 && i != p2)
        {
            ans[j] = arr[i];
            j++;
        }
    }
    sort(ans, ans + 7);
    for (int i = 0; i < 7; i++)
    {
        cout << ans[i] << endl;
    }
    return 0;
}