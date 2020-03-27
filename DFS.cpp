#include<iostream>
#include<stack>
#include<vector> 
//깊이 우선 탐색(DFS)
//스택에 사용

//1.최상단 노드확인
//2.최상단 노드에서 방문하지않은 인접노드를 스택에넣고 방문처리
//3.방문하지 않은 인접노드가 없다면 그노드 뺌 
using namespace std;

int num=7;
int c[8]; //방문처리 
vector<int> a[8]; //vector사용해 2차원동적배열 

void dfs(int x){//재귀함수 이용한 처리 
	if(c[x]) return;
	c[x]=true;
	cout << x << ' ';
	for(int i = 0;i < a[x].size(); i++){	
		int y = a[x][i];
		dfs(y);
	}
};

void dfsStk(int start){ //스택사용해 처리 
	stack<int> s;
	s.push(start);
	c[start]=true;
	printf("%d ",start); 
	
	while(!s.empty()){
		int x =	s.top();
		s.pop();
		for(int i=0; i < a[x].size(); i++){
			int y = a[x][i];
			if(!c[y]){
				printf("%d ",y);
				s.push(y);
				c[y] = true;
			}
		}	
	}
} 

int main(void){
	a[1].push_back(2);
	a[2].push_back(1);
	
	a[1].push_back(3);
	a[3].push_back(1);

	a[2].push_back(3);
	a[3].push_back(2);
	
	a[2].push_back(4);
	a[4].push_back(2);
	
	a[2].push_back(5);
	a[5].push_back(2);
	
	a[3].push_back(6);
	a[6].push_back(3);
	
	a[3].push_back(7);
	a[7].push_back(3);
	
	a[4].push_back(5);
	a[5].push_back(4);
	
	a[7].push_back(6);
	a[6].push_back(7);
	
	dfsStk(1);
	
	return 0;
}
