/*****************************
*ע�⣺
 1. �Ƚ�����ʱ�ɲ��ø�Ȩֵ�ķ�����
 	age = year * a + month * b + day * c;
	���У�a��b��cΪȨֵ���������ȡ����Ҫ����һ������
	�����ǣ�
	�ú�һλ����Ȩֵ�����ܳ�����һλ���������ڳ���Ȩֵ���ܳ����·ݵ���СȨֵ��
	�������������31������С1���������ڵ�Ȩֵ��1������СҲ��31��
	���������һ������һλ���ܸ���ǰһλ������Ҫ��λ�� 
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
