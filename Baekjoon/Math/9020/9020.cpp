/*
문제 해결 아이디어
소수의 리스트와
그 수가 소수인지 판별할 수 있어야한다.
수의 범위가 크지 않으므로 두 리스트를 모두 가질 수 있다.

그렇다면 소수 2부터 탐색해서 2와 원 수에서 2를 뺀 값이 소수인지 판별한다.
맞으면 정답 변수에 저장한다. 정답 변수는 하나이면 된다.
그렇게 뺀 값이 원래 값보다 작지 않을때까지 반복한다.
*/
#include <iostream>
using namespace std;
int prime[10000];
int check[10001];
int pn = 0;
int n = 10000;
int main()
{
    for (int i = 2; i < n; i++)
    {
        if (check[i] == false)
        {
            prime[pn++] = i;
            for (int j = i * i; j <= n; j += i)
            {
                check[j] = true;
            }
        }
    }

    int T;
    int num;
    int a;

    cin >> T;
    while (T--)
    {
        cin >> num;
        for (int i = 2; i < num / 2 + 1; i++)
        {
            if (check[i] == false && check[num - i] == false)
            {
                a = i;
            }
        }
        cout << a << " " << num - a << endl;
    }

    return 0;
}