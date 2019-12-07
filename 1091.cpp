#include <iostream>
using namespace std;

int main(){
	int m, k, n, i, j, r, cnt, s;
	
	cin >> m;
	for(i = 0; i < m; i++){
		cin >> k;
		for(j = k, cnt = 0; j != 0; j /= 10){
			cnt++;
		}
		for(j = 0, s = 1; j < cnt; j++){
			s *= 10;
		}
		for(n = 1; n < 10; n++){
			r = n * k * k;
			if(r % s == k){
				cout << n << " " << r << endl;
				break;
			}
		}
		if(n >= 10){
			cout << "No" << endl;
		}
	}
	
	return 0;
} 
