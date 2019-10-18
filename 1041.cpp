#include <iostream>
using namespace std;

class Student{
	public:
		Student(){};
		Student(string i, int st, int s){
			id = i;
			seat_test = st;
			seat = s;
		}
		string id;
		int seat_test;
		int seat;
};

int main(){
	int seat_test, seat, i, j, n, m;
	string id;
	cin >> n;
	Student stu[n];
	
	for(i = 0; i < n; i++){
		cin >> id >> seat_test >> seat;
		stu[i] = Student(id, seat_test, seat);
	}
	cin >> m;
	for(i = 0; i < m; i++){
		cin >> seat_test;
		for(j = 0; j < n; j++){
			if(stu[j].seat_test == seat_test){
				cout << stu[j].id << " " << stu[j].seat << endl;
			}
		}
	}
	
	return 0;
}
