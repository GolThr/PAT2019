#include <iostream>
using namespace std;

int main(){
	int T, k, i, n1, b, t, n2;
	
	cin >> T >> k;
	for(i = 0; i < k; i++){
		cin >> n1 >> b >> t >> n2;
		if(T != 0){
			if(t > T){
				cout << "Not enough tokens.  Total = " << T << "." << endl;
			}else{
				if((b == 0 && n2 < n1) || (b == 1 && n1 < n2)){
					T += t;
					cout << "Win " << t << "!  Total = " << T << "." << endl;
				}else{
					T -= t;
					cout << "Lose " << t << ".  Total = " << T << "." << endl;
				}
			}
		}else{
			cout << "Game Over." << endl;
			break;
		}
	}
	
	return 0;
} 
