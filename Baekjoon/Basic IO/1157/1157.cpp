//1157번 단어공부
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string S;
    int arr[26] = {0};
    int max = 0;
    char ans;
    cin >> S;
    int len = S.size();
    for (int i = 0; i < len; i++)
    {
        S[i] = toupper(S[i]);
        arr[S[i] - 65] += 1;
    }
    for (int i = 0; i < 26; i++)
    {
        if (max < arr[i])
        {
            ans = arr[i] + 65;
            max = arr[i];
        }
        else if (max == arr[i])
        {
            ans = '?';
        }
    }
    cout << ans;

    return 0;
}