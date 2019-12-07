#include <iostream>
using namespace std;

int main(){
	int n, m, i, j, max, s;
	cin >> n >> m;
	int sale[n] = {0};
	bool flag = false;
	
	for(i = 0; i < m; i++){
		for(j = 0; j < n; j++){
			cin >> s;
			sale[j] += s;
		}
	}
	for(i = 0, max = 0; i < n; i++){
		if(sale[i] > max){
			max = sale[i];
		}
	}
	cout << max << endl;
	for(i = 0; i < n; i++){
		if(sale[i] == max){
			if(!flag){
				cout << i + 1;
				flag = true;
			}else{
				cout << " " << i + 1;
			}
		}
	}
	
	return 0;
}
