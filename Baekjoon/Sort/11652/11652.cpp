//11652번 카드
#include <cstdio>
#include <algorithm>
using namespace std;
long long arr[1000001];
int main()
{
    int N;
    scanf("%d", &N);
    for (int i = 0; i < N; i++)
    {
        scanf("%lld", &arr[i]);
    }
    sort(arr, arr + N);
    int cnt = 1;
    int ans_cnt = 1;
    long long ans = arr[0];
    for (int i = 1; i < N; i++)
    {
        if (arr[i - 1] == arr[i])
        {
            cnt++;
        }
        else
        {   
            cnt = 1;
        }
        if (cnt > ans_cnt)
        {
            ans_cnt = cnt;
            ans = arr[i];
        }
    }
    printf("%lld", ans);
    return 0;
}