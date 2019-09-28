#include <iostream>
using namespace std;

class School{
	public:
		int id, sum;
		School(){}
		School(int i, int s){
			id = i;
			sum = s;
		}
};

int main(){
	int i, j, n, id, score, max, cnt = 0;
	School sch[100000];
	
	cin >> n;
	for(i = 0; i < n; i++){
		cin >> id >> score;
		for(j = 0; j < cnt; j++){
			if(sch[j].id == id){
				sch[j].sum += score;
			}
		}
		if(j >= cnt){
			sch[cnt++] = School(id, score);
		}
	}
	for(i = 0, max = 0; i < cnt; i++){
		if(sch[i].sum > sch[max].sum){
			max = i;
		}
	}
	cout << sch[max].id << " " << sch[max].sum;
	
	return 0;
} 
