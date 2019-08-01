//11656번 접미사 배열
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;
int main()
{
    string s;
    string arr[1001];
    cin >> s;
    int len = s.length();
    for (int i = 0; i < len; i++)
    {
        arr[i] = s.substr(i, len);
    }
    sort(arr, arr + len);
    for (int i = 0; i < len; i++)
    {
        cout << arr[i] << endl;
    }

    return 0;
}