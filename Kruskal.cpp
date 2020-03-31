#include<iostream>
#include<vector>
#include<algorithm>
//크루스칼 알고리즘
//가장 적은비용 으로 모든 노드 연결
//최소 비용 신장 트리
//최소 간선 수= 노드갯수-1 
//1.간선 정보 오름차순 정렬
//2.비용이 적은 간선부터 그래프에 포함 ->최소 비용 신장 트리 완성 
//3.사이클 형성하는경우 간선을 포함x ->union-find 알고리즘 활용 

using namespace std;

int getParent(int parent[], int x){
	if(parent[x] == x) return x;
	return parent[x] = getParent(parent, parent[x]);
}

//두부모 노드 합치는 함수
void unionParent(int parent[],int a,int b){
	a = getParent(parent, a);
	b = getParent(parent, b);
	if(a < b){
		parent[b] = a;
	}else{
		parent[a] = b;
	}
}
//같은 부모 가지는지
int findParent(int parent[],int a,int b){
	a = getParent(parent, a);	
	b = getParent(parent, b);
	if(a == b){
		return 1;
	}else{
		return 0;
	}
}

class Edge {
public:
	int node[2];
	int distance;
	
	Edge(int a, int b, int distance){
		this->node[0] = a;
		this->node[1] = b;
		this->distance = distance;
	}
	
	bool operator <(Edge &edge){ //오름차순 
		return this->distance < edge.distance;
	}
};

int main(void){
	
	int n=7;
	int m=11;
	
	vector <Edge> v;
	v.push_back(Edge(1,7,12)); 
	v.push_back(Edge(1,4,28));
	v.push_back(Edge(1,2,67));
	v.push_back(Edge(1,5,17));
	v.push_back(Edge(2,4,24));
	v.push_back(Edge(2,5,62));
	v.push_back(Edge(3,5,20));
	v.push_back(Edge(3,6,37));
	v.push_back(Edge(4,7,13));
	v.push_back(Edge(5,6,45));
	v.push_back(Edge(5,7,73));
		
	sort(v.begin(), v.end());
		
	int parent[n];
	for(int i = 1; i <=n; i++){
		parent[i] = i;
	}
	
	int sum=0;
	for(int i=0; i < v.size(); i++){
		if(!findParent(parent, v[i].node[0], v[i].node[1])){	//동일한 부모가 아닌경우 , 즉 사이클 아닌경우 
			sum += v[i].distance;								//간선더하고 
			unionParent(parent, v[i].node[0], v[i].node[1]);	//연결	
		}	
	}
	printf("%d \n",sum);
	
}
