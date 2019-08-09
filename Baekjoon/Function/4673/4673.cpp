//4673번 셀프 넘버
#include <iostream>
using namespace std;
int num[10035];
int self_num(int n)
{
    int sum = 0;
    sum += n;
    while (1)
    {
        sum += n % 10;
        n = n / 10;
        if (n == 0)
            break;
    }
    return sum;
}
int main()
{
    
     for (int i = 1; i <= 10000; i++)
    {
        if(self_num(i)<= 10035){
        num[self_num(i)] = 1;
        if (!num[i])
            cout << i << endl;
        }
    }
    return 0;
}