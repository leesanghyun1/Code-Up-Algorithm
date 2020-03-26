#include <iostream>
#include <algorithm> //sort함수 
//c++ 문법 
// sort() ->정렬함수 

using namespace std;

bool compare(int a, int b){ //sort함수의 정렬 조건을 정할수있음 
	return a < b; //오름차순정렬 
} 

int main(void){
	int a[10] = {9,3,5,4,1,10,8,6,7,2};
	
	sort(a, a + 10, compare);  
	
	for(int i= 0; i<10;i++){
		cout << a[i] << ' ';
	}
}
