//4344번 평균은 넘겠지
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int C;
    double mean;
    int arr[1000];
    int sum = 0;
    double cnt = 0;
    cin >> C;

    while (C--)
    {
        int N;
        cin >> N;
        mean = 0;
        sum = 0;
        cnt = 0;
        for (int i = 0; i < N; i++)
        {
            int num;
            cin >> num;

            arr[i] = num;
            sum += num;
        }
        mean = sum / N;
        for (int i = 0; i < N; i++)
        {
            if (arr[i] > mean)
            {
                cnt++;
            }
        }
        cout.setf(ios::fixed);

        cout.precision(3);
        cout << round(cnt / N * 100 * 1000) / 1000 << '%' << endl;
    }
    return 0;
}