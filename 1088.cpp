#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int i, j;
	float m, x, y, a, b, c;
	bool flag = false;
	
	cin >> m >> x >> y;
	for(i = 9; i > 0; i--){
		for(j = 9; j >= 0; j--){
			a = i * 10 + j;
			b = j * 10 + i;
			c = b / y;
			if(abs(a - b) == x * c){
				flag = true;
				break;
			}
		}
		if(flag){
			break;
		}
	}
	if(flag){
		cout << a << " ";
		if(a > m){
			cout << "Cong ";
		}else if(a == m){
			cout << "Ping ";
		}else{
			cout << "Gai ";
		}
		if(b > m){
			cout << "Cong ";
		}else if(b == m){
			cout << "Ping ";
		}else{
			cout << "Gai ";
		}
		if(c > m){
			cout << "Cong";
		}else if(c == m){
			cout << "Ping";
		}else{
			cout << "Gai";
		}
	}else{
		cout << "No Solution";
	}
	
	return 0;
}
