#include <iostream>
#include <algorithm> //sort�Լ� 
#include <vector>
//vector, pair �̿� 

using namespace std;


int main(void){
	vector<pair<int, string> > v; //pair->�ѽ��� �����͸� �ٷ������ ������
	v.push_back(pair<int, string>(90,"�̻���")); //���Ϳ� ������ ���� 
	v.push_back(pair<int, string>(87,"����ȣ")); //push_back -���� ������ �κп� ���� 
	v.push_back(pair<int, string>(70,"�ڹο�"));
	v.push_back(pair<int, string>(80,"������"));  //<first,second> -������ 
	
	sort(v.begin(), v.end());
	
	for(int i= 0; i< v.size(); i++){ //second ->�̸����� 
		cout << v[i].second << ' ';
	}
	
	return 0; 
}
