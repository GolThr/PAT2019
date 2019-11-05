#include <iostream>
using namespace std;

int isSimp(int a, int b){
	int t;
	while(b != 0){
		t = b;
		b = a % b;
		a = t;
	}
	return a;
}

int main(){
	cout << isSimp(25, 3);
	
	return 0;
}
