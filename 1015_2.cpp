#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

class Student{
	public:
		int id, de, ca, sum;
		Student(int i, int d, int c){
			id = i;
			de = d;
			ca = c;
			sum = i + d + c;
		}
		Student(){
		}
};

int main(){
	int i, N, L, H, id, de, ca, M = 0;
	Student stu;
	vector<Student> v1, v2, v3, v4;
	
	cin >> N >> L >> H;
	for(i = 0; i < N; i++){
		cin >> id >> de >> ca;
		if(de >= L && ca >= L){
			if(de >= H && ca >= H){
				v1.push_back(Student(id, de, ca)); 
			}else if(de >= H && ca < H){
				v2.push_back(Student(id, de, ca));
			}else if(de < H && ca < H && de >= ca){
				v3.push_back(Student(id, de, ca));
			}else{
				v4.push_back(Student(id, de, ca));
			}
		}
	}
	
	
	
	
	return 0;
} 
