/*****************************
*注意：
 1. 测试点3是指总分是59.5也算合格,所以要在判断g>=60前四舍五入，以下66行 
*参考：
 1. [CSDN] PAT乙级1080 MOOC期终成绩 (25 分)测试点3
	https://blog.csdn.net/weixin_43333890/article/details/96978557
*****************************/ 

#include <iostream>
#include <cmath>
#include <map>
#include <algorithm>
using namespace std;

struct Student{
	string id;
	float p, m, f, g;
};

class Score{
	public:
		Score(){}
		Score(float a, float b){
			p = a, m = b;
		}
		float p, m;
};

bool comp(const Student & a, const Student & b){
	if(a.g > b.g){
		return true;
	}else if(a.g == b.g){
		return a.id < b.id;
	}
	return false;
}

int main(){
	int p, m, n, i, j, cnt = 0;
	float score, g;
	string id;
	map<string, Score> stu;
	Student list[10010];
	
	cin >> p >> m >> n;
	for(i = 0; i < p; i++){
		cin >> id >> score;
		if(score >= 200){
			stu.insert(pair<string, Score>(id, Score(score, -1)));
		}
	}
	for(i = 0; i < m; i++){
		cin >> id >> score;
		if(stu.find(id) != stu.end()){
			stu[id].m = score;
		}
	}
	for(i = 0; i < n; i++){
		cin >> id >> score;
		if(stu.find(id) != stu.end()){
			if(stu[id].m > score){
				g = 0.4 * stu[id].m + 0.6 * score;
			}else{
				g = score;
			}
			g = round(g);
			if(g >= 60){
				list[cnt].id = id;
				list[cnt].p = stu[id].p;
				list[cnt].m = stu[id].m;
				list[cnt].f = score;
				list[cnt].g = g;
				cnt++;
			}
		}
	}
	
	sort(list, list + cnt, comp);
	for(i = 0; i < cnt; i++){
		cout << list[i].id << " "  << list[i].p << " " << list[i].m << " " << list[i].f << " " << list[i].g << endl;
	}
	
//	map<string, Score>::iterator itr = stu.begin();
//	for(; itr != stu.end(); itr++){
//		cout << itr -> first << " : " << itr -> second.p << " " << itr -> second.m << endl;
//	}
	
	return 0;
}
