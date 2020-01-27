//2874번 스택 수열 스택
#include <iostream>
#include <stdio.h>
#include <stack>

using namespace std;

int arr[300001];

int main()
{
    stack<int> s;
    int T, num;
    int n = 1;
    int i = 0;
    s.push(0);
    scanf("%d", &T);
    while (T--)
    {
        cin >> num;

        if (num > s.top())
        {
            while (num > s.top())
            {
                s.push(n);
                n++;
                arr[i] = 0;
                i++;
                //printf("+\n");
            }
        }
        if (num == s.top())
        {
            s.pop();
            arr[i] = 1;
            i++;
            //printf("-\n");
        }
        if (num < s.top())
        {
            printf("NO");
            return 0;
        }
    }
    for (int j = 0; j < i; j++)
    {
        if (arr[j] == 0)
        {
            printf("+\n");
        }
        else
        {
            printf("-\n");
        }
    }
    return 0;
}