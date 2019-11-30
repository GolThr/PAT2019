#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int n, i, k;
	int card[100011] = {0};
	
	cin >> n;
	for(i = 0; i < n; i++){
		cin >> k;
		card[abs(k - i - 1)]++;
	}
	for(i = 100010; i >= 0; i--){
		if(card[i] > 1){
			cout << i << " " << card[i] << endl;
		}
	}
	
	return 0;
}
