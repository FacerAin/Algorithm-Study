//2446번 별 찍기 - 9
#include <stdio.h>
int main(void)
{
    int num;
    scanf("%d", &num);
    for (int i = 0; i < num; i++)
    {
        for (int k = 0; k < i ; k++)
        {
            printf(" ");
        }
        for (int j = 0; j < 2 * num - 2 * (i)-1; j++)
        {
            printf("*");
        }

        printf("\n");
    }
    for (int i = 0; i < num-1; i++)
    {
        for (int k = 0; k < num-i-2; k++)
        {
            printf(" ");
        }
        for (int j = 0; j <2*i+3; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}