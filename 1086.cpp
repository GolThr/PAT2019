#include <iostream>
using namespace std;

int main(){
	int a, b, r, i, j;
	bool flag = false;
	
	cin >> a >> b;
	r = a * b;
	
	while(r > 0){
		if(r % 10 != 0 && !flag){
			cout << r % 10;
			flag = true;
		}else if(flag){
			cout << r % 10;
		}
		r /= 10;
	}
	
	return 0;
}
