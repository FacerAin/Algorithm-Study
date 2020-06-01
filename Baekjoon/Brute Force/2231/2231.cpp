/*
해결 아이디어
- N의 가장 작은 생성자 => 작은 수부터 탐색하며 찾으면 반환
- 없으면 0을 출력 => 반복문 종료까지 못찾으면 0 반환
- 숫자를 0부터 키워가고, 이것을 1+2+3 이런식으로 쪼개는 함수구현 
*/

#include <iostream>
using namespace std;

int get_divideNum(int num)
{
    int sum = 0;
    while (num != 0)
    {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}
int get_constructor(int num)
{
    int cons_num = 0;
    for (int i = 0; i < num; i++)
    {
        if (num == i + get_divideNum(i))
        {
            return i;
        }
    }
    return 0;
}

int main()
{
    int N;
    cin >> N;
    cout << get_constructor(N);
    return 0;
}