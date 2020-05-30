/*
수를 곱할 떄는 언제나 범위나 최대값 생각하기.
*/

#include <stdio.h>

#define M_PI 3.14159265358979323846

int main(void)
{
    double a;
    scanf("%lf", &a);
    printf("%6f %6f", M_PI * a * a, a * a * 2);

    return 0;
}