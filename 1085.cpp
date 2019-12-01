#include <iostream>
#include <algorithm>
#include <map>
#include <cmath>
using namespace std;

class School{
	public:
		School(){
			score = 0;
			cnt_s = 0;
		}
		School(string n,double s){
			name = n;
			score = s;
			cnt_s = 1;
		}
		School(string n,double s, int c){
			name = n;
			score = s;
			cnt_s = c;
		}
		string name;
		double score = 0;
		int cnt_s = 0;
};

bool comp(const School & a, const School & b){
	if(a.score != b.score){
		return a.score > b.score;
	}else if(a.cnt_s != b.cnt_s){
		return a.cnt_s < b.cnt_s;
	}else{
		return a.name < b.name;
	}
}

int main(){
	int n, i, j, p = 0, cnt;
	double score, pre;
	string name, id;
	cin >> n;
	School sch[n];
	map<string, School> list;
	
	for(i = 0; i < n; i++){
		cin >> id >> score >> name;
		for(j = 0; name[j]; j++){
			if(name[j] >= 'A' && name[j] <= 'Z'){
				name[j] = name[j] + 32;
			}
		}
		if(id[0] == 'T'){
			if(list.find(name) != list.end()){
				list[name].score += (score * 1.5);
				list[name].cnt_s++;
			}else{
				list.insert(pair<string, School>(name, School(name, score * 1.5)));
			}
		}else if(id[0] == 'A'){
			if(list.find(name) != list.end()){
				list[name].score += score;
				list[name].cnt_s++;
			}else{
				list.insert(pair<string, School>(name, School(name, score)));
			}
		}else if(id[0] == 'B'){
			if(list.find(name) != list.end()){
				list[name].score += (score / 1.5);
				list[name].cnt_s++;
			}else{
				list.insert(pair<string, School>(name, School(name, score / 1.5)));
			}
		}
	}
	
	map<string, School>::iterator itr;
	for(itr = list.begin(); itr != list.end(); itr++){
		//cout << itr -> first << " : " << itr -> second.name << " " << itr -> second.score << " " << itr -> second.cnt_s << endl;
		sch[p].name = itr -> second.name;
		sch[p].score = floor(itr -> second.score);
		sch[p].cnt_s = itr -> second.cnt_s;
		p++;
	}
	sort(sch, sch + p, comp);
	cout << p << endl;
	for(i = 0, pre = 0; i < p; i++){
		if(sch[i].score != pre){
			cnt = i + 1;
			cout << cnt << " " << sch[i].name << " " << sch[i].score << " " << sch[i].cnt_s << endl;
			pre = sch[i].score;
		}else{
			cout << cnt << " " << sch[i].name << " " << sch[i].score << " " << sch[i].cnt_s << endl;
			pre = sch[i].score;
		}
	}
	
	return 0;
}
