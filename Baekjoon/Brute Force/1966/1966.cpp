/*
1966번 프린터 큐
*/
#include <iostream>
#include <deque>
using namespace std;
int main()
{
    int T;
    int num;
    cin >> T;
    while (T--)
    {
        deque<int> v;
        v.clear();
        int N, M;
        int cnt = 0;
        cin >> N >> M;
        for (int i = 0; i < N; i++)
        {
            cin >> num;
            v.push_back(num);
        }
        while (1)
        {
            bool checkBig = false;
            for (int i = 0; i < v.size(); i++) //우선 순위가 가장 높은지 확인
            {
                if (v[0] < v[i]) //아니라면 큐 뒤로 보내기
                {
                    if (M == 0)
                    {
                        M = v.size() - 1;
                    }
                    else
                    {
                        M--;
                    }
                    checkBig = true;
                    num = v.at(0);
                    v.push_back(num);
                    v.pop_front();

                    break;
                }
            }
            if (checkBig == false) //출력할 차례이면 출력
            {
                cnt++;
                if (M == 0)
                {
                    cout << cnt << endl;
                    break;
                }
                v.pop_front();
                M--;
            }
        }
    }

    return 0;
}