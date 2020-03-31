#include<stdio.h>
// Union-Find 합집합 찾기 
// 1.자식배열에 부모값 넣음 -union
// 2.재귀함수로 1-1 , 2-1, 3-2 이면 재귀함수를 통해 3또한 1을 가르키도록 함 
// 3. -> 1-1,2-1,3-1 이 세가지 노드는 같은 그래프인것을 알 수 있음
 
 
//부모의값과 동일하면 반 환 
//다르면 실제부모 찾으려고 재귀함수실행 
int getParent(int *parent, int x){
	if(parent[x] == x) return x;
	return parent[x] = getParent(parent, parent[x]);
}

//두부모 노드 합치는 함수
void unionParent(int *parent,int a,int b){
	a = getParent(parent, a);
	b = getParent(parent, b);
	if(a < b){
		parent[b] = a;
	}else{
		parent[a] = b;
	}
}
//같은 부모 가지는지
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
	printf("연결 확인 수 두개 입력:");
	scanf("%d", &a);
	scanf("%d", &b);
	printf("%d 과%d 는 연결되어있나? %s",a,b,findParent(parent,a,b));
} 
