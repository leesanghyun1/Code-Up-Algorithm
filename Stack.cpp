#include<iostream>
#include<stack> //���� ���̺귯�� 
//����
//�������� ���� �����Ͱ� ������� ó�� 
 
using namespace std;

int main(void){
	stack<int> s;
	s.push(6);
	s.push(5);
	s.pop();
	s.push(2);
	s.push(3);
	s.pop();
	
	while(!s.empty()){
		cout<<s.top()<<' ';
		s.pop();
	}
	return 0;
} 
