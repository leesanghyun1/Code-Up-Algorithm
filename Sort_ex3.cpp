#include <iostream>
#include <algorithm> //sort�Լ� 
#include <vector>
//vector, pair �̿� 
//������ ������ �ΰ������ΰ�쿡 �̿� 

using namespace std;

bool compare(pair<string,pair<int,int> >a,
			pair<string,pair<int,int> >b){ //������ ���ٸ� ���ϴ��� �л��� �켱���� ���� 
				if(a.second.first == b.second.first){
					return a.second.second > b.second.second;
				}else{ //������ �����л��� �켱���� ���� 
					return a.second.first > b.second.first;
				}
			}

int main(void){
	vector<pair<string, pair<int, int> > > v; //pair->�ѽ��� �����͸� �ٷ������ ������
	v.push_back(pair<string, pair<int, int> >("�̻���",pair<int,int>(90,19930717))); //���Ϳ� ������ ���� 
	v.push_back(pair<string, pair<int, int> >("����ȣ",pair<int,int>(80,19950422))); //push_back -���� ������ �κп� ���� 
	v.push_back(pair<string, pair<int, int> >("�ڹο�",pair<int,int>(70,19960305)));
	v.push_back(pair<string, pair<int, int> >("������",pair<int,int>(90,19920615)));  //<first,second> -������ 
	
	sort(v.begin(), v.end(), compare);
	
	for(int i= 0; i< v.size(); i++){ //second ->�̸����� 
		cout << v[i].first << ' ';
	}
	
	return 0; 
}
