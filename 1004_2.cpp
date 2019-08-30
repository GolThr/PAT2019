#include <iostream>
using namespace std;

int main(){
	int n, score, max_score = 0, min_score = 101;
	string name, stu_id, max_name, max_stuId, min_name, min_stuId;
	
	cin >> n;
	while(n--){
		cin >> name >> stu_id >> score;
		if(score > max_score){
			max_name = name;
			max_stuId = stu_id;
			max_score = score;
		}
		if(score < min_score){
			min_name = name;
			min_stuId = stu_id;
			min_score = score;
		}
	}
	
	cout << max_name << " " << max_stuId << endl << min_name << " " << min_stuId;
	
	return 0;
} 
