#include <iostream>
using namespace std;
int main()
{
    int N;
    cin >> N;
    for (int i = 0; i < 2 * N; i++)
    {
        if (i % 2 == 0)
        {
            for (int i = 0; i < N; i++)
            {
                if (i % 2 == 0)
                {
                    cout << "*";
                }
                else
                {
                    cout << " ";
                }
            }
        }
        else
        {
            for (int i = 0; i < N; i++)
            {
                if (i % 2 == 0)
                {
                    cout << " ";
                }
                else
                {
                    cout << "*";
                }
            }
        }
        cout << endl;
    }
    return 0;
}