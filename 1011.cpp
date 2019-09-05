#include <iostream>
using namespace std;

int main(){
	long long a, b, c;
	int T, i;
	
	cin >> T;
	for(i = 0; i < T; i++){
		cin >> a >> b >> c;
		if(a + b > c){
			cout << "Case #" << i + 1 << ": true" << endl;
		}else{
			cout << "Case #" << i + 1 << ": false" << endl;
		}
	}
	
	return 0;
} 
