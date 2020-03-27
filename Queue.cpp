#include<iostream>
#include<queue> //큐 라이브러리 
//큐 
//가장먼저  들어온 데이터가 가장먼저 처리 
 
using namespace std;

int main(void){
	queue<int> q;
	q.push(6);
	q.push(5);
	q.pop();
	q.push(2);
	q.push(3);
	q.pop();
	
	while(!q.empty()){
		cout<<q.front()<<' ';
		q.pop();
	}
	return 0;
} 
