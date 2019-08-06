//2577번 숫자의 개수
#include <iostream>
using namespace std;
int main()
{
    int a, b, c, num;
    cin >> a >> b >> c;
    int i = 0;
    int arr_num[10] = {
        0,
    };
    int arr_input[15] = {
        1,
    };
    num = a * b * c;
    for (int i = 0; i < 15; i++)
    {
        arr_input[i] = -1;
    }
    while (1)
    {
        arr_input[i] = num % 10;
        num = num / 10;
        if (num == 0)
        {
            break;
        }
        i++;
    }
    for (int i = 0; i < 15; i++)
    {
        if (arr_input[i] != -1)
        {
            int index;
            index = arr_input[i];
            arr_num[index] += 1;
        }
    }
    for (int i = 0; i < 10; i++)
    {
        cout << arr_num[i] << endl;
    }
    return 0;
}