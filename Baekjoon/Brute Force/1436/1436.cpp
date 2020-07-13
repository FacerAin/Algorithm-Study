#include <iostream>
#include <string>
using namespace std;
int main()
{
    int num = 666;
    int result_num = 666;
    int present_num = 1;
    int input_num;
    cin >> input_num;
    while (input_num > present_num)
    {
        num += 1;
        if (to_string(num).find("666") < 1000)
        {
            result_num = num;
            present_num++;
        }
    }
    cout << result_num;
    return 0;
}