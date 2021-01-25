#include <vector>
#include <iostream>
using namespace std;
vector<vector<int>> check(102, vector<int>(102));
vector<vector<int>> map(102, vector<int>(102));
int cnt = 0;
void dfs(int i, int j){
    check[i][j] = 1;
    //상
    if(i-1 >=0 && map[i-1][j] > 0 && check[i-1][j] == 0){
        dfs(i-1, j);
        cnt++;
    }
    //하
    if(i+1 <  map.size() && map[i+1][j] > 0 && check[i-1][j] == 0){
        dfs(i+1, j);
        cnt++;
    }
    //좌
    if(j- 1 >=0 && map[i][j-1] > 0 && check[i][j-1] == 0){
        dfs(i, j-1);
        cnt++;
    }
    //우
    if(j + 1 < map[0].size() && map[i][j+1] > 0 && check[i-1][j] == 0){
        dfs(i, j+1);
        cnt++;
    }
}

using namespace std;
// 전역 변수를 정의할 경우 함수 내에 초기화 코드를 꼭 작성해주세요.
vector<int> solution(int m, int n, vector<vector<int>> picture) {
    int number_of_area = 0;
    int max_size_of_one_area = 0;
    ;
    vector<int> answer(2);
    for(int i = 0; i < m; i++){
        for(int j =0; j < n; j++){
            cout << i << j << endl;
            cout << check[i][j] << endl;
            cout << picture[i][j] << endl;
            check[i][j] = 0;
            map[i][j] = picture[i][j];

        }
    }
    
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            if(check[i][j] == 0 && map[i][j] > 0){
                cnt = 0;{
            if(check[i][j] == 0 && map[i][j] > 0){
               cnt = 0;
                number_of_area += 1;
                dfs(i, j);
                if(cnt > max_size_of_one_area){
                    max_size_of_one_area = cnt;
                }
            }
        }
    }
                number_of_area += 1;
                dfs(i, j);
                if(cnt > max_size_of_one_area){
                    max_size_of_one_area = cnt;
                }
            }
        }
    }
    answer[0] = number_of_area;
    answer[1] = max_size_of_one_area;
    return answer;
}