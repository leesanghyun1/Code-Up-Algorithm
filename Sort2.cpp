#include <iostream>
#include <algorithm> //sort�Լ� 
//c++ ���� 
// sort() ->�����Լ� 

using namespace std;

bool compare(int a, int b){ //sort�Լ��� ���� ������ ���Ҽ����� 
	return a < b; //������������ 
} 

int main(void){
	int a[10] = {9,3,5,4,1,10,8,6,7,2};
	
	sort(a, a + 10, compare);  
	
	for(int i= 0; i<10;i++){
		cout << a[i] << ' ';
	}
}
