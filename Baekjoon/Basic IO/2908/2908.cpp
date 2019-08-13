//2908번 상수
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s1, s2;
    char temp;
    cin >> s1 >> s2;
    int len1 = s1.size();
    int len2 = s2.size();
    int n1,n2;
    for (int i = 0; i < len1 / 2; i++)
    {
        temp = s1[i];
        s1[i] = s1[len1 - 1 - i];
        s1[len1 - 1 - i] = temp;
    }
    for (int i = 0; i < len2 / 2; i++)
    {
        temp = s2[i];
        s2[i] = s2[len2 - 1 - i];
        s2[len2 - 1 - i] = temp;
    }
    n1 = stoi(s1);
    n2 = stoi(s2);

    if(n1 >= n2){
        cout << n1;
    }
    else{
        cout << n2;
    }
}
