//2445번 별 찍기 - 8
#include <stdio.h>
int main(void)
{
    int num;
    scanf("%d", &num);
    for (int i = 0; i < num; i++)
    {
        for (int k = 0; k < i + 1; k++)
        {
            printf("*");
        }
        for (int j = 0; j < 2 * num - 2 * (i + 1); j++)
        {
            printf(" ");
        }
        for (int k = 0; k < i + 1; k++)
        {
            printf("*");
        }
        printf("\n");
    }
    for (int i = 0; i < num; i++)
    {
        for (int k = 0; k < num-i-1; k++)
        {
            printf("*");
        }
        for (int j = 0; j <2*i+2; j++)
        {
            printf(" ");
        }
        for (int k = 0; k < num-i-1; k++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}