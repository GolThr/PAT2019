#include <iostream>
using namespace std;

int main(){
	int n, i, j, k, m, cnt_1, cnt_0, a, b, t;
	cin >> n;
	int s[n + 1];
	int r[n + 1] = {0};
	int temp_1[n + 1], temp_0[n + 1];
	int result[2] = {200, 200};
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
			
//			cout << i << " " << j << endl; 
//			for(k = 1; k <= n; k++){
//				cout << r[k] << " ";
//			} 
//			cout << endl;
			
			for(k = 1, cnt_1 = 0, cnt_0 = 0; k <= n; k++){
				if(r[k] < 0){
					temp_1[cnt_1++] = k;
				}
				if(r[k] == 0){
					temp_0[cnt_0++] = k;
				}
			}
			if(cnt_1 == 2){
				if(temp_1[0] < result[0]){
					result[0] = temp_1[0];
					result[1] = temp_1[1];
				}else if(temp_1[0] == result[0]){
					if(temp_1[1] < result[1]){
						result[0] = temp_1[0];
						result[1] = temp_1[1];
					}
				}
			}else if(cnt_1 == 1){
				if(cnt_0 > 0){
					if(temp_1[0] > temp_0[0]){
						a = temp_0[0];
						b = temp_1[0];
					}else{
						a = temp_1[0];
						b = temp_0[0];
					}
					if(a < result[0]){
						result[0] = a;
						result[1] = b;
					}else if(a == result[0]){
						if(b < result[1]){
							result[0] = a;
							result[1] = b;
						}
					}
				}
			}else if(cnt_1 == 0){
				if(cnt_0 >= 2){
					if(temp_0[0] < result[0]){
						result[0] = temp_0[0];
						result[1] = temp_0[1];
					}else if(temp_0[0] == result[0]){
						if(temp_0[1] < result[1]){
							result[0] = temp_0[0];
							result[1] = temp_0[1];
						}
					}
				}
			}
		}
	}
	if(result[0] != 200 && result[1] != 200){
		cout << result[0] << " " << result[1];
	}else{
		cout << "No Solution";
	}
	
	return 0;
}
