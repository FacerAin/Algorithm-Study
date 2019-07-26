//9012번 괄호
#include <iostream>
#include <string>
#include <stack>
using namespace std;

string check(string s)
{
    stack<char> st;
    for (int i = 0; i < s.size(); i++)
    {
        char c = s[i];

        if (c == '(')
        {
            st.push(s[i]);
        }
        else
        {
            if(st.empty()){
                return "NO";
            }else{
                st.pop();
            }
        }
    }
    if(st.empty()){
        return "YES";
    }
    else{
        return "NO";
    }
    
}

int main(){
    int N;
    cin >> N;
    for(int i=0; i<N; i++){
        string s;
        cin >> s;
        cout << check(s) << '\n';
    }
    return 0;
}