//5639 이진 검색 트리
/*
어떻게 풀 것인가?
전위 순회 입력을 바탕으로
트리를 만든 다음 후위 순회를 출력할까?

노드의 수는 10000개 이하라 부담은 없다.

트리를 어떻게 구현하는가?



*/

#include <iostream>

using namespace std;

struct Node{
	int data;
	Node* left;
	Node* right;
};

Node* MakeTree(Node* node, int data){
	if(node == NULL){
		node = new Node();
		node->data = data;
		node->left = NULL;
		node->right = NULL;
	}
	else if(data <= node->data){
		node->left = MakeTree(node->left, data);
	}else{
		node->right = MakeTree(node->right, data);
	}
	
	return node;
}

void PostOrder(Node* node){
	if(node){
		PostOrder(node->left);
		PostOrder(node->right);
		cout << node->data << '\n';
	}

}

int main(){
	Node* root = NULL;
	int num;
	while(cin >> num){
		if(num == EOF) break;
		root = MakeTree(root, num);
	}
	PostOrder(root);
	return 0;
}