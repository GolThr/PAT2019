#include <iostream>
using namespace std;

class People{
	public:
		int age;
		string name;
		People(int a){
			age = a;
		}
		void setData(string n, int a){
			name = n;
			age = a;
		}
};

int main(){
	string name;
	int i, n, age, year, month, day, cnt = 0;
	People max(0), min(201);
	
	cin >> n;
	for(i = 0; i < n; i++){
		cin >> name;
		scanf("%d/%d/%d", &year, &month, &day);
		bool filter = false;
		
		if(9 > month){
			age = 2015 - year;
		}else if(9 == month){
			if(6 > day){
				age = 2015 - year;
			}else{
				age = 2014 - year;
			}
		}else{
			age = 2014 - year;
		}

		if(year > 2014){
			filter = false;
		}else if(year == 2014){
			if(month > 9){
				filter = false;
			}else if(month == 9){
				if(day > 6){
					filter = false;
				}else{
					filter = true;
				}
			}else{
				filter = true;
			}
		}else{
			filter = true;
		}
		
		if(age <= 200 && filter){
			cnt++;
			if(age > max.age){
				max.setData(name, age);
			}
			if(age < min.age){
				min.setData(name, age);
			}
		}
	}
	if(cnt != 0){
		cout << cnt << " " << max.name << " " << min.name;
	}else{
		cout << 0;
	}
	
	return 0;
} 
