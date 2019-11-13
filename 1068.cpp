#include <iostream>
#include <cmath>
using namespace std;
 
int main(){
	int m, n, tol, i, j, k, l, cnt = 0;
	cin >> m >> n >> tol;
	int color[m][n];
	bool flag = true;
	int rx, ry;
	
	for(i = 0; i < m; i++){
		for(j = 0; j < n; j++){
			cin >> color[i][j];
		}
	}
	for(i = 0; i < m; i++){
		for(j = 0; j < n; j++){
			for(k = i - 1; k <= i + 1; k++){
				if(k >= 0){
					for(l = j - 1; l <= j + 1; l++){
						if(l >= 0 && k != i && l != j){
							flag = true;
							if(abs(color[i][j] - color[k][l]) <= tol){
								flag = false;
								break;
							}
						}
					}
				}
			}
			if(flag == true){
				cnt++;
				rx = i;
				ry = j;
				cout << i << j << endl;
			}
		}
	}
	cout << cnt << endl;
	if(cnt == 1){
		cout << "(" << ry << ", " << rx << "): " << color[rx][ry];
	}else if(cnt > 1){
		cout << "Not Unique";
	}else{
		cout << "Not Exist";
	}
	
	return 0;
} 
