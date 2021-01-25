#include <iostream>
using namespace std;
int tall[51];
int weight[51];
int rank_arr[51];
int main()
{
    int N;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> weight[i] >> tall[i];
        rank_arr[i] = 1;
    }

    int my_tall = 0;
    int my_weight = 0;
    for (int i = 0; i < N; i++)
    {
        my_tall = tall[i];
        my_weight = weight[i];
        for (int j = 0; j < N; j++)
        {
            if (my_tall < tall[j] && my_weight < weight[j])
            {
                rank_arr[i]++;
            }
        }
    }

    for (int i = 0; i < N; i++)
    {
        cout << rank_arr[i] << " ";
    }

    return 0;
}