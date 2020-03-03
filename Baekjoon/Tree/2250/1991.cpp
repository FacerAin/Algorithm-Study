#include <iostream>
using namespace std;

struct Node
{
    int left;
    int right;
};
Node T[50];
void preorder(int node)
{
    if (node == -1)
    {
        return;
    }
    cout << char(node + 'A');
    preorder(T[node].left);
    preorder(T[node].right);
}
void inorder(int node)
{
    if (node == -1)
    {
        return;
    }
    inorder(T[node].left);
    cout << char(node + 'A');
    inorder(T[node].right);
}
void postorder(int node)
{
    if (node == -1)
    {
        return;
    }
    postorder(T[node].left);
    postorder(T[node].right);
    cout << char(node + 'A');
}

int main()
{
    int n;
    char root, left, right;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> root >> left >> right;
        T[root - 'A'].left = left == '.' ? -1 : left - 'A';
        T[root - 'A'].right = right == '.' ? -1 : right - 'A';
    }
    preorder(0);
    cout << '\n';
    inorder(0);
    cout << '\n';
    postorder(0);
    cout << '\n';

    return 0;
}
