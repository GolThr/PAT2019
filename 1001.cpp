#include <iostream>

using namespace std;

int main(){
	int i, n;
	
	cin >> n;
	for(i = 0; n != 1; i++){
		if(n % 2 == 0){
			n /= 2;
		}else{
			n = (3 * n + 1) / 2;
		}
	}
	cout << i;
	
	return 0;
} 
