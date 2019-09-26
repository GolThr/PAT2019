#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;

class Student{
	public:
		int id;
		int de;
		int ca;
		int sum;
		Student(){};
		Student(int i, int v, int t):id(i), de(v), ca(t), sum(de+ca){};
		void show(){
			cout << id << " " << de << " " << ca << endl;
		}
};

bool compare(Student a, Student b){
	if(a.sum > b.sum){
		return true;
	}else if(a.sum == b.sum){
		if(a.de > b.de){
			return true;
		}else if(a.de == b.de){
			if(a.id < b.id){
				return true;
			}
		}
	}
	return false;
}

int main(){
	vector<Student> v1, v2, v3, v4;
	int i, N, L, H, M, id, de, ca;
	
	cin >> N >> L >> H;
	for(i = 0, M = 0; i < N; i++){
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
			M++;
		}
	}
	
	sort(v1.begin(), v1.end(), compare);
	sort(v2.begin(), v2.end(), compare);
	sort(v3.begin(), v3.end(), compare);
	sort(v4.begin(), v4.end(), compare);
	
	cout << M << endl;
	vector<Student>::iterator itr;
	for(itr = v1.begin(); itr != v1.end(); itr++){
		itr -> show();
	}
	for(itr = v2.begin(); itr != v2.end(); itr++){
		itr -> show();
	}
	for(itr = v3.begin(); itr != v3.end(); itr++){
		itr -> show();
	}
	for(itr = v4.begin(); itr != v4.end(); itr++){
		itr -> show();
	}
	
	return 0;
}
