#include<iostream>
#include<queue> //ť ���̺귯�� 
//ť 
//�������  ���� �����Ͱ� ������� ó�� 
 
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
