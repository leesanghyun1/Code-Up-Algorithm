#include <iostream>
#include <algorithm> //sort�Լ� 
//c++ ���� 
// sort() ->�����Լ� 
//class �̿��� ���� (���� �ǹ�������) 
//Ư���� ������ �������� ���� 

using namespace std;

class Student {
public:
	string name;
	int score;
	Student(string name, int score){ //������
		this->name = name;
		this->score = score; 
	}
	// ���� ������ '������ ���� ����'
	 bool operator <(Student &student) { //�ٸ��л��� �񱳸� �� �� 
	 	return this->score < student.score; //�� ������ ���ٸ� �켱������ ���� 
	 }
};

int main(void){
	Student students[] = {
		Student("�̻���",90),
		Student("������",95),
		Student("����ȣ",82),
		Student("�ڹο�",79)
	};
	
	sort(students, students + 4);  
	
	for(int i= 0; i<4;i++){
		cout << students[i].name << ' ';
	}
}
