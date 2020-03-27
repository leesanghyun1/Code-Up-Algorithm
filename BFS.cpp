#include<iostream>
#include<queue>
#include<vector> 
//너비 우선 탐색(BFS)
//최단 경로, 최단길이 보장 
//큐 사용 
//거리가 가까운거 부터 탐색 
using namespace std;

// 1.큐에서 노드 꺼냄
// 2.인접노드 큐에 추가(방문하지않은 인접노드) 
// 3.꺼낸 노드 출력 

int num=7;
int c[8]; //방문처리 
vector<int> a[8];

void bfs(int start){
	queue<int> q;
	q.push(start);
	c[start]=true;	
	
	while(!q.empty()){
		int x=q.front();
		q.pop();	
		printf("%d ",x);
		for(int i=0; i < a[x].size(); i++){
			int y = a[x][i];
			if(!c[y]){
				q.push(y);
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
		
	a[1].push_back(3);
	a[3].push_back(1);

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
	
	bfs(1);
	
	return 0;
}
