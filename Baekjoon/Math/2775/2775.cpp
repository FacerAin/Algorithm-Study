//2775번 부녀회장이 될테야
#include <iostream>
using namespace std;
int main()
{
    int T;
    int k, n;
    int arr[15][15] = {0};
    cin >> T;
    while (T--)
    {
        cin >> k;
        cin >> n;
        for (int i = 0; i <= k; i++)
        {

            for (int j = 1; j <= n; j++)
            {
                if (i == 0)
                {
                    arr[i][j] = j;
                }
                else if (j == 1)
                {
                    arr[i][j] = 1;
                }
                else
                {
                    arr[i][j] = arr[i][j - 1] + arr[i - 1][j];
                }
            }
        }
        cout << arr[k][n] <<'\n';
    }
    return 0;
}