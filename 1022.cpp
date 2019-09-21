#include <iostream> 
using namespace std;

void printD(long n, int d){
	if(n == 0){
		return;
	}
	printD(n / d, d);
	cout << n % d;
}

int main(){
	int d;
	long a, b;
	
	cin >> a >> b >> d;
	if(a + b != 0){
		printD(a + b, d);
	}else{
		cout << "0";
	}
	
	return 0;
}
