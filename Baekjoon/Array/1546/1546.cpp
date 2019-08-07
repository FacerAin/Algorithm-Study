//1546번 평균
//arr이 int형이면 안되는 이유는?
#include <iostream>

using namespace std;
int main()
{
    int N;
    int max = 0;
    float sum = 0;
    float arr[1001];
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        int num;
        cin >> num;
        arr[i] = num;
        if (num > max)
        {
            max = num;
        }
    }
    for (int i = 0; i < N; i++)
    {
        sum = sum + arr[i] / max * 100;
    }
    cout << sum / N;
    return 0;
}
