#include <iostream>
using namespace std;

int main(){
	int n[10];
	int i, j;
	
	for(i = 0; i < 10; i++){
		cin >> n[i];
	}
	
	for(i = 1; i < 10; i++){
		if(n[i] != 0){
			cout << i;
			n[i]--;
			break;
		}
	}
	
	for(i = 0; i < 10; i++){
		if(n[i] != 0){
			for(j = 0; j < n[i]; j++){
				cout << i;
			}
		}
	}
	
	return 0;
}
