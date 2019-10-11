/*****************************
*注意：
 1. 四舍五入取整函数为round()函数，需#include <cmath> 
 2. 注意浮点数 
*****************************/ 

#include <iostream>
#include <cmath>
using namespace std;

int main(){
	float n, a; 
	int i, j;
	char c;
	
	cin >> n >> c;
	a = round(n / 2);
	for(i = 0; i < n; i++){
		cout << c;
	}
	cout << endl;
	for(i = 0; i < a - 2; i++){
		cout << c;
		for(j = 0; j < n - 2; j++){
			cout << " ";
		}
		cout << c << endl;
	}
	for(i = 0; i < n; i++){
		cout << c;
	}
	
	return 0;
}
