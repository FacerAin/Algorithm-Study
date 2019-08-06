//2920번 음계
#include <iostream>
using namespace std;
bool isArrayEqual(int arr1[], int arr2[])
{
    for (int i = 0; i < 8; i++)
    {
        if (arr1[i] != arr2[i])
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int arr_asc[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int arr_desc[] = {8, 7, 6, 5, 4, 3, 2, 1};
    int arr[8];
    for (int i = 0; i < 8; i++)
    {
        cin >> arr[i];
    }
    if (isArrayEqual(arr, arr_asc))
    {
        cout << "ascending";
    }
    else if (isArrayEqual(arr, arr_desc))
    {
        cout << "descending";
    }
    else
    {
        cout << "mixed";
    }
    return 0;
}
