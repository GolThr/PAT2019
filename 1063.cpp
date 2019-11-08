#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int n, i, a, b, t, max = 0;
	
	cin >> n;
	for(i = 0; i < n; i++){
		cin >> a >> b;
		t = a * a + b * b;
		if(t > max){
			max = t;
		}
	}
	printf("%.2f", sqrt(max));
	
	return 0;
} 
