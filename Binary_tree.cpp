#include<iostream> 
//이진트리(비선형 자료구조), 선형-배열,큐,스택 
//완전 이진트리가 아닌 이진트리는 배열로 표현하기 어려움 - 포인터 사용 
//전위 순회(preorder) 중 왼 오 
//중위 순회(inoreder) 왼 중 오 
//후위 순회(postorder) 왼 오 중 
using namespace std;

int num = 15;

typedef struct node *tree;
typedef struct node {
	int data;
	tree left, right; //포인터 
} node;

int preorder(tree ptr){
	if(ptr){
		cout << ptr->data <<' ';
		preorder(ptr->left);
		preorder(ptr->right);
	}
}

int inorder(tree ptr){
	if(ptr){
		inorder(ptr->left);
		cout << ptr->data <<' ';
		inorder(ptr->right);
	}	
}

int postorder(tree ptr){
	if(ptr){
		postorder(ptr->left);
		postorder(ptr->right);
		cout << ptr->data <<' ';
	}	
}

int main(void){
	node n[num+1];
	
	for(int i = 1; i < num; i++){
		n[i].data = i;
		n[i].left = NULL;
		n[i].right = NULL;
	}
	for(int i = 1; i < num; i++){
		if(i % 2 == 0){	//짝수 
			n[i / 2].left = &n[i]; // 왼쪽 노드 주소 
		}else{	//홀수 
			n[i / 2].right = &n[i];	
		}
	}
	printf("preorder:");
	preorder(&n[1]);
	printf("\n");
	printf("inorder:");
	inorder(&n[1]);
	printf("\n");
	printf("postorder:");
	postorder(&n[1]);
	
	return 0; 
}
