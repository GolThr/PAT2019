#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int n, i, j, k, m, cnt;
	cin >> n;
	int s[n + 1];
	int r[n + 1] = {0};
	int temp[n + 1];
	int result[2] = {101, 101};
	bool isWrong;
	
	for(i = 1; i <= n; i++){
		cin >> s[i];
	}
	for(i = 1; i <= n; i++){
		for(j = i + 1; j <= n; j++){
			if(i == j){
				continue;
			}
			for(k = 1; k <= n; k++){
				r[k] = 0;
			}
			for(k = 1, isWrong = false; k <= n; k++){
				if(k == i || k == j){
					m = -s[k];
				}else{
					m = s[k];
				}
				
//				cout << m << " ";
				
				if(m > 0){
					if(r[m] >= 0){
						r[m] = 1;
					}else{
						isWrong = true;
					}
				}else{
					if(r[-m] <= 0){
						r[-m] = -1;
					}else{
						isWrong = true;
					}
				}
			}
			if(isWrong){
				continue;
			}
			
//			cout << endl;
			
			if((r[i] > 0 && r[j] > 0) || (r[i] < 0 && r[j] < 0)){
				continue;
			}else if(r[i] == 0 && r[j] == 0){
				r[i] = -1;
			}else{
				if(r[i] == 0){
					if(r[j] > 0){
						r[i] = -1;
					}
				}else if(r[j] == 0){
					if(r[i] > 0){
						r[j] = -1;
					}
				}
			}
			
			
//			for(k = 1; k <= n; k++){
//				cout << r[k] << " ";
//			} 
//			cout << endl;
			
			for(k = 1, cnt = 0; k <= n; k++){
				if(r[k] < 0){
					temp[cnt++] = k;
				}
			}
			if(cnt == 2){
				if(temp[0] < result[0]){
					result[0] = temp[0];
					result[1] = temp[1];
				}else if(temp[0] == result[0]){
					if(temp[1] < result[1]){
						result[0] = temp[0];
						result[1] = temp[1];
					}
				}
			}
		}
	}
	if(result[0] != 101 && result[1] != 101){
		cout << result[0] << " " << result[1];
	}else{
		cout << "No Solution";
	}
	
	return 0;
}
