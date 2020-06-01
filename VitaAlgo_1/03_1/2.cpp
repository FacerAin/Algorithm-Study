/*
1. 소수의 리스트를 구하여 풀어보자 => 10억개의 int 배열은 매우 비효율적
2. 루트 n까지만 약수를 찾으면 된다. => 최적화
3. 짝수가 두개 이상이면 2 아닌가?
4. 식을 세워보자 어떤 규칙을 도출해낼 수 있는가
주의사항) a<b 이런 조건은 없었다. 운이 좋아서 맞았지만 다음부터 주의하자
*/

#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    if (a == b)
    {
        bool found = false;
        for (int i = 2; i * i <= a; i++)
        {
            if (a % i == 0)
            {
                found = true;
                cout << i;
                break;
            }
        }
        if (!found)
        {
            cout << a;
        }
    }
    else
    {
        cout << "2";
    }
    return 0;
}