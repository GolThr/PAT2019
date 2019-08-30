#include <iostream>
using namespace std;

class Student{
	public:
		Student(int s){score = s;}
		Student(string n, string id, int s){
			name = n;
			stu_id = id;
			score = s;
		}
		int getScore(){return score;}
		void show(){
			cout << name << " " << stu_id;
		}
	private:
		string name;
		string stu_id;
		int score;
};

int main(){
	int n, score;
	string name, stu_id;
	Student max(-1), min(101);
	
	cin >> n;
	while(n--){
		cin >> name >> stu_id >> score;
		if(score > max.getScore()){
			max = Student(name, stu_id, score);
		}
		if(score < min.getScore()){
			min = Student(name, stu_id, score);
		}
	}
	
	max.show();
	cout << endl;
	min.show();
	
	return 0;
} 
