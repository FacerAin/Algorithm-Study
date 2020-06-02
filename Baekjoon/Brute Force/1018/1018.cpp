/*
체스판의 정의에 입각하여
(윈도우)를 만들고 이 안의 만족하지 않는 개수 => 구체적인 정의 필요 찾기 
=> 보드의 시작 값만 알면 보드의 모양은 정해져 있다. 이걸로 하나하나 비교하면 될듯 /// 근데 이것이 최적의 보드가 아닐 수 있다.
윈도우의 크기는 8*8로 지정되어 있다.
그리고 이것이 최소라면 저장. 저장할 때는 윈도우 시작 위치만 저장하면 된다. => 시작 위치 저장할 필요 없다. 이것을 착각함.
!!그리고 행렬 구분 잘하자!
N과 M이 크지 않아서 브루트포스가 가능하다.
순회를 끝내고 최소 값을 출력하면 된다.
*/

#include <iostream>
#include <string>
using namespace std;
char map[51][51];
int main()
{
    int N, M;
    cin >> N >> M;
    string line;
    for (int i = 0; i < N; i++)
    {
        cin >> line;
        for (int j = 0; j < M; j++)
        {
            map[i][j] = line[j];
        }
    }
    char mark;
    char mark2;
    int cnt = 0;
    int cnt2 = 0;
    int min = 1000;

    for (int x = 0; x <= M - 8; x++)
    {
        for (int y = 0; y <= N - 8; y++)
        {
            mark = map[y][x];
            mark == 'W'
                ? mark2 = 'B'
                : mark2 = 'W';
            cnt = 0;
            cnt2 = 0;
            for (int i = x; i < x + 8; i++)
            {
                for (int j = y; j < y + 8; j++)
                {
                    if (map[j][i] != mark)
                    {
                        cnt++;
                    }
                    if (map[j][i] != mark2)
                    {
                        cnt2++;
                    }
                    mark == 'W'
                        ? mark = 'B'
                        : mark = 'W';
                    mark2 == 'W'
                        ? mark2 = 'B'
                        : mark2 = 'W';
                }
                mark == 'W'
                    ? mark = 'B'
                    : mark = 'W';
                mark2 == 'W'
                    ? mark2 = 'B'
                    : mark2 = 'W';
            }

            if (cnt < min)
            {
                min = cnt;
            }
            if (cnt2 < min)
            {
                min = cnt2;
            }
        }
    }

    cout << min;

    return 0;
}