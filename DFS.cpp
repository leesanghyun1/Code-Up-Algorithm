#include<iostream>
#include<stack>
#include<vector> 
//���� �켱 Ž��(DFS)
//���ÿ� ���

//1.�ֻ�� ���Ȯ��
//2.�ֻ�� ��忡�� �湮�������� ������带 ���ÿ��ְ� �湮ó��
//3.�湮���� ���� ������尡 ���ٸ� �׳�� �� 
using namespace std;

int num=7;
int c[8]; //�湮ó�� 
vector<int> a[8]; //vector����� 2���������迭 

void dfs(int x){//����Լ� �̿��� ó�� 
	if(c[x]) return;
	c[x]=true;
	cout << x << ' ';
	for(int i = 0;i < a[x].size(); i++){	
		int y = a[x][i];
		dfs(y);
	}
};

void dfsStk(int start){ //���û���� ó�� 
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
