//11729번 하노이탑 이동 순서
#include <cstdio>
#include <math.h>
#include <vector>
using namespace std;

vector<pair<int, int>> p;

void hanoi(int n, int from, int tmp, int to)
{
    if (n == 1)
    {
        p.push_back({from, to});
    }
    else
    {
        hanoi(n - 1, from, to, tmp);
        p.push_back({from, to});
        hanoi(n - 1, tmp, from, to);
    }
}
int main()
{
    int N;
    scanf("%d",&N);
    long long cnt = pow(2, N) - 1;
    printf("%d\n", cnt);
    hanoi(N, 1, 2, 3);
    for (int i = 0; i < cnt; i++){
        printf("%d %d\n",p[i].first,p[i].second);
    }
        return 0;
}