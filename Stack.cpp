#include<iostream>
#include<stack> //스택 라이브러리 
//스택
//마지막에 들어온 데이터가 가장먼저 처리 
 
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
