#include <iostream>
#include <algorithm> //sort함수 
#include <vector>
//vector, pair 이용 

using namespace std;


int main(void){
	vector<pair<int, string> > v; //pair->한쌍의 데이터를 다루기위해 묶어줌
	v.push_back(pair<int, string>(90,"이상현")); //백터에 데이터 삽입 
	v.push_back(pair<int, string>(87,"나정호")); //push_back -벡터 마지막 부분에 삽입 
	v.push_back(pair<int, string>(70,"박민웅"));
	v.push_back(pair<int, string>(80,"이진욱"));  //<first,second> -데이터 
	
	sort(v.begin(), v.end());
	
	for(int i= 0; i< v.size(); i++){ //second ->이름정보 
		cout << v[i].second << ' ';
	}
	
	return 0; 
}
