#include <iostream>
using namespace std;

class People{
	public:
		int age;
		char name[7];
		People(int a){
			age = a;
		}
		void setData(char n[7], int a){
			for(int i = 0; i < 7; i++){
				name[i] = n[i];
			}
			age = a;
		}
};

int main(){
	char name[7];
	int i, n, age, year, month, day, cnt = 0;
	People max(0), min(201);
	
	cin >> n;
	for(i = 0; i < n; i++){
		scanf("%s", name);
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
		printf("%d %s %s", cnt, max.name, min.name);
	}else{
		cout << 0;
	}
	
	
	return 0;
} 
