# include <iostream>
using namespace std;

int main(){
	int n, i, j, t, sum = 0;
	cin >> n;
	int num[n];
	
	for(i = 0; i < n; i++){
		cin >> num[i];
	}
	for(i = 0; i < n; i++){
		for(j = 0; j < n; j++){
			if(i != j){
				sum += num[i] * 10 + num[j];
			}
		}
	}
	cout << sum;
	
	return 0;
}
