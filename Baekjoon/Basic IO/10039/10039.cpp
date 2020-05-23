#include <iostream>
using namespace std;
int main()
{
    int sum = 0;
    int arr[5];
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
        if (arr[i] < 40)
        {
            sum += 40;
        }
        else
        {
            sum += arr[i];
        }
    }
    cout << sum / 5;
    return 0;
}