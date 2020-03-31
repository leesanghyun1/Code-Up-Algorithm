#include<iostream> 
//����Ʈ��(���� �ڷᱸ��), ����-�迭,ť,���� 
//���� ����Ʈ���� �ƴ� ����Ʈ���� �迭�� ǥ���ϱ� ����� - ������ ��� 
//���� ��ȸ(preorder) �� �� �� 
//���� ��ȸ(inoreder) �� �� �� 
//���� ��ȸ(postorder) �� �� �� 
using namespace std;

int num = 15;

typedef struct node *tree;
typedef struct node {
	int data;
	tree left, right; //������ 
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
		if(i % 2 == 0){	//¦�� 
			n[i / 2].left = &n[i]; // ���� ��� �ּ� 
		}else{	//Ȧ�� 
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
