//6588 ������ ����, ����: ���� �Ҽ�
//�Ҽ� ���ϴ� �˰��� ����, *���� �Ҷ� �ε����� �ڷ��� ���� �Ѵ��� üũ ���� ��!
#include <iostream>
#include <stdio.h>
#define SIZE 1000005
using namespace std;

int prime[SIZE + 1];
int pn = 0;
bool check[SIZE + 1];
void prime_func()
{
    for (int i = 2; i <= SIZE; i++)
    {
        if (check[i] == false)
        {
            prime[pn++] = i;
            for (int j = i + i; j <= SIZE; j += i)
            {
                check[j] = true;
            }
        }
    }
}

int main()
{

    int n;
    prime_func();
    while (1)
    {
        bool chk = false;
        scanf("%d", &n);
        if (n == 0)
        {
            return 0;
        }
        for (int i = 0; i <= n; i++)
        {
            if (!check[n - prime[i]])
            {
                printf("%d = %d + %d\n", n, prime[i], n - prime[i]);
                chk = true;
                break;
            }
        }
        if (!chk)
        {
            printf("Goldbach's conjecture is wrong.");
        }
    }
    return 0;
}