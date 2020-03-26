#include <iostream>
#include <algorithm> //sort함수 
//c++ 문법 
// sort() ->정렬함수 
using namespace std;

int main(void){
	int a[10] = {9,3,5,4,1,10,8,6,7,2};
	sort(a, a + 10); //메모리주소, 마지막정렬에있는 메모리주소 
	for(int i= 0; i<10;i++){
		cout << a[i] << ' ';
	}
}
