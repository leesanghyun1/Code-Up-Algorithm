#include <iostream>
#include <algorithm> //sort함수 
#include <vector>
//vector, pair 이용 
//정렬할 기준이 두개이하인경우에 이용 

using namespace std;

bool compare(pair<string,pair<int,int> >a,
			pair<string,pair<int,int> >b){ //성적이 같다면 생일느린 학생이 우선순위 높게 
				if(a.second.first == b.second.first){
					return a.second.second > b.second.second;
				}else{ //성적이 높은학생이 우선순위 높게 
					return a.second.first > b.second.first;
				}
			}

int main(void){
	vector<pair<string, pair<int, int> > > v; //pair->한쌍의 데이터를 다루기위해 묶어줌
	v.push_back(pair<string, pair<int, int> >("이상현",pair<int,int>(90,19930717))); //백터에 데이터 삽입 
	v.push_back(pair<string, pair<int, int> >("나정호",pair<int,int>(80,19950422))); //push_back -벡터 마지막 부분에 삽입 
	v.push_back(pair<string, pair<int, int> >("박민웅",pair<int,int>(70,19960305)));
	v.push_back(pair<string, pair<int, int> >("이진욱",pair<int,int>(90,19920615)));  //<first,second> -데이터 
	
	sort(v.begin(), v.end(), compare);
	
	for(int i= 0; i< v.size(); i++){ //second ->이름정보 
		cout << v[i].first << ' ';
	}
	
	return 0; 
}
