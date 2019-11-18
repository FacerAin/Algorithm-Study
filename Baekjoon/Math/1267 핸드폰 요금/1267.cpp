#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int T;
    cin >> T;
    int sumy = 0;
    int summ = 0;
    while (T--)
    {
        double num;
        cin >> num;
        sumy += ceil((num+1) / 30) * 10;
        summ += ceil((num+1) / 60) * 15;
    }
    if(sumy == summ){
        cout << 'Y' <<' ' << 'M' << ' ' << sumy;
    }else if(sumy > summ){
        cout << 'M' << ' ' << summ;
    }else{
        cout << 'Y' << ' ' << sumy;
    }
    return 0;
}