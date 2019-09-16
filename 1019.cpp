#include <iostream>
using namespace std;

int main(){
	int n[4];
	int i, j, num, t, a, b, result;
	
	cin >> num;
	while(true){
		result = num;
		for(i = 0; i < 4; i++){
			n[i] = 0;
		}
		for(i = 0; i < 4; i++){
			n[i] = num % 10;
			num /= 10;
		}
		
		if(n[0] == n[1] && n[1] == n[2] && n[2] == n[3]){
			printf("%04d - %04d = 0000", result, result);
			break;
		}
		
		for(i = 0; i < 4 - 1; i++){
			for(j = 1; j < 4 - i; j++){
				if(n[j] > n[j - 1]){
					t = n[j - 1];
					n[j - 1] = n[j];
					n[j] = t;
				}
			}
		}
		
		for(i = 0, a = 0, j = 1000; i < 4; i++, j /= 10){
			a += n[i] * j;
		}
		for(i = 0, b = 0, j = 1; i < 4; i++, j *= 10){
			b += n[i] * j;
		}
		
		result = a - b;
		printf("%04d - %04d = %04d", a, b, result);
		if(result != 6174){
			cout << endl;
			num = result;
		}else{
			break;
		}
	}
	
	return 0;
} 
