#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Person{
	public:
		Person(string n, int h){
			name = n;
			height = h;
		}
		string name;
		int height;
};

bool compare(const Person & p1, const Person & p2){
	if(p1.height != p2.height) {
		return p1.height > p2.height;
	} else {
		return p1.name < p2.name;
	}
}

int main(){
	int i, j, n, k, height, per_row, last_row;
	string name;
	vector<Person> origin, row;
	
	cin >> n >> k;
	per_row = n / k;
	last_row = n - (k - 1) * per_row;
	for(i = 0; i < n; i++){
		cin >> name >> height;
		origin.push_back(Person(name, height));
	}
	
	sort(origin.begin(), origin.end(), compare);
	
	for(j = 0; j < last_row; j++){
		if(j % 2 == 0){
			row.push_back(Person(origin[0].name, origin[0].height));
		}else{
			row.insert(row.begin(), Person(origin[0].name, origin[0].height));
		}
		origin.erase(origin.begin());
	}
	//Êä³ö 
	for(j = 0; j < last_row; j++){
		if(j != 0){
			cout << " ";
		}
		cout << row[j].name;
	}
	cout << endl;
	
	for(i = 0; i < k - 1; i++){
		row.clear();
		for(j = 0; j < per_row; j++){
			if(j % 2 == 0){
				row.push_back(Person(origin[0].name, origin[0].height));
			}else{
				row.insert(row.begin(), Person(origin[0].name, origin[0].height));
			}
			origin.erase(origin.begin());
		}
		//Êä³ö 
		for(j = 0; j < per_row; j++){
			if(j != 0){
				cout << " ";
			}
			cout << row[j].name;
		}
		cout << endl;
	}
		
	return 0;
}
