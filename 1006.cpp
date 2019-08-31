#include <iostream>
using namespace std;

int main(){
	int B, S, G, i, n;
	
	cin >> n;
	B = n / 100;
	S = (n / 10) % 10;
	G = n % 10;
	
	if(B){
		for(i = 0; i < B; i++){
			cout << "B";
		}
	}
	if(S){
		for(i = 0; i < S; i++){
			cout << "S";
		}
	}
	if(G){
		for(i = 0; i < G; i++){
			cout << i + 1;
		}
	}
	
	return 0;
} 
