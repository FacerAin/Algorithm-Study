/*
브루트포스 사용
*/

#include <iostream>
using namespace std;
int num[110];
int main()
{
    int N, M;
    cin >> N >> M;
    for (int i = 0; i < N; i++)
    {
        cin >> num[i];
    }
    int sum = 0;
    int result = 0;

    for (int i = 0; i < N; i++)
    {
        for (int j = i + 1; j < N; j++)
        {
            for (int k = j + 1; k < N; k++)
            {
                sum = num[i] + num[j] + num[k];
                if (sum <= M && sum > result)
                {
                    result = sum;
                }
            }
        }
    }

    cout << result;
    return 0;
}