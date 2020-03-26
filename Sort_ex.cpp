#include <iostream>
#include <algorithm> //sort함수 
//c++ 문법 
// sort() ->정렬함수 
//class 이용한 정렬 (보통 실무에적합) 
//특정한 변수를 기준으로 정렬 

using namespace std;

class Student {
public:
	string name;
	int score;
	Student(string name, int score){ //생성자
		this->name = name;
		this->score = score; 
	}
	// 정렬 기준은 '점수가 작은 순서'
	 bool operator <(Student &student) { //다른학생과 비교를 할 때 
	 	return this->score < student.score; //내 점수가 낮다면 우선순위가 높다 
	 }
};

int main(void){
	Student students[] = {
		Student("이상현",90),
		Student("나동빈",95),
		Student("나정호",82),
		Student("박민웅",79)
	};
	
	sort(students, students + 4);  
	
	for(int i= 0; i<4;i++){
		cout << students[i].name << ' ';
	}
}
