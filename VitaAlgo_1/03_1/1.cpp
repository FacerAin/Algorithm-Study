/*
2020-05-23
앵무새 꼬꼬
단순한 입출력 문제,
단, cin/getline 개념 잡을 수 있었음
cin의 경우 '\n'을 받지 않는다.
따라서 getline을 통해 위 개행문자를 비우고
입력을 진행해야한다.

답안 첨삭
string 배열을 굳이 정의할 필요가 있었는가?
string("aeiou") => 이렇게 정의해도 된다. 자료형 취지에 맞는 문법인듯
그리고 아스키코드 이용하여 대문자 소문자 판별할 수 있으나 뭐 이거는 사람 차이인듯
*/

#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
    int N;
    bool isTrue;
    string s;

    cin >> N;
    getline(cin, s);

    char preset[10] = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
    for (int i = 0; i < N; i++)
    {
        getline(cin, s);
        int length = s.size();
        isTrue = false;
        for (int j = 0; j < length; j++)
        {
            for (int k = 0; k < 10; k++)
            {
                if (preset[k] == s[j])
                {
                    cout << s[j];
                    isTrue = true;
                    break;
                }
            }
        }
        if (!isTrue)
        {
            cout << "???";
        }
        cout << endl;
    }
    return 0;
}