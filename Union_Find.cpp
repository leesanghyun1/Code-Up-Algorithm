#include<stdio.h>
// Union-Find ������ ã�� 
// 1.�ڽĹ迭�� �θ� ���� -union
// 2.����Լ��� 1-1 , 2-1, 3-2 �̸� ����Լ��� ���� 3���� 1�� ����Ű���� �� 
// 3. -> 1-1,2-1,3-1 �� ������ ���� ���� �׷����ΰ��� �� �� ����
 
 
//�θ��ǰ��� �����ϸ� �� ȯ 
//�ٸ��� �����θ� ã������ ����Լ����� 
int getParent(int *parent, int x){
	if(parent[x] == x) return x;
	return parent[x] = getParent(parent, parent[x]);
}

//�κθ� ��� ��ġ�� �Լ�
void unionParent(int *parent,int a,int b){
	a = getParent(parent, a);
	b = getParent(parent, b);
	if(a < b){
		parent[b] = a;
	}else{
		parent[a] = b;
	}
}
//���� �θ� ��������
char *findParent(int *parent,int a,int b){
	a = getParent(parent, a);
	b = getParent(parent, b);
	if(a == b){
		return "yes";
	}else{
		return "no";
	}
}

int main(void){
	int a,b=0;
	int parent[11];
	for(int i=1;i<=10;i++){
		parent[i] = i;
	}
	unionParent(parent, 1, 2);
	unionParent(parent, 2, 3);
	unionParent(parent, 3, 4);
	unionParent(parent, 5, 6);
	unionParent(parent, 6, 7);
	unionParent(parent, 7, 8);
	printf("���� Ȯ�� �� �ΰ� �Է�:");
	scanf("%d", &a);
	scanf("%d", &b);
	printf("%d ��%d �� ����Ǿ��ֳ�? %s",a,b,findParent(parent,a,b));
} 
