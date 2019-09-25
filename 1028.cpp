/*****************************
*注意：
 1. 比较日期时可采用附权值的方法：
 	age = year * a + month * b + day * c;
	其中，a、b、c为权值，可以随便取，但要满足一个规则，
	规则是：
	让后一位乘上权值，不能超过上一位。比如日期乘以权值不能超过月份的最小权值，
	比如日期最大是31，月最小1，那设日期的权值是1，月最小也得31。
	就像二进制一样，后一位不能干涉前一位，满了要进位。 
*****************************/ 

#include <iostream>
using namespace std;

class People{
	public:
		long age;
		string name;
		People(long a){
			age = a;
		}
		void setData(string n, long a){
			name = n;
			age = a;
		}
};

int main(){
	string name;
	int i, n, year, month, day, cnt = 0;
	long age, up=2014*12010+9*100+6, down = 1814*12010+9*100+6;
	People max(-1), min(2015*12010+12*100+31);
	
	cin >> n;
	for(i = 0; i < n; i++){
		cin >> name;
		scanf("%d/%d/%d", &year, &month, &day);
		age = year * 12010 + month * 100 + day;
		
		if(age >= down && age <= up){
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
		cout << cnt << " " << min.name << " " << max.name;
	}else{
		cout << 0;
	}
	
	return 0;
} 
