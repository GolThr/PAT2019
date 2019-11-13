/*****************************
*注意：
 1. 不仅要满足和周围8个像素点颜色差充分大，还要满足这个点的颜色在所有里面是独一无二的 
*参考：
 1. [CSDN] PAT 1068. 万绿丛中一点红(20)
	https://blog.csdn.net/qq_22530055/article/details/60469575
*****************************/ 

#include <iostream>
#include <cmath>
using namespace std;

int value[20000000] = {0};

int main() {
	int m, n, tol, i, j, k, l, cnt = 0;
	cin >> m >> n >> tol;
	int color[n][m];
	bool flag = true;
	int rx, ry;

	for(i = 0; i < n; i++) {
		for(j = 0; j < m; j++) {
			cin >> color[i][j];
			value[color[i][j]]++;
		}
	}
	for(i = 0; i < n; i++) {
		for(j = 0; j < m; j++) {
			if(value[color[i][j]] == 1) {
				for(k = i - 1, flag = true; k <= i + 1; k++) {
					if(k >= 0 && k < n && flag) {
						for(l = j - 1; l <= j + 1; l++) {
							if(l >= 0 && l < m && (k != i || l != j)) {
								//flag = true;
								if(abs(color[i][j] - color[k][l]) <= tol) {
									flag = false;
									//cout << k << l << flag << " ";
									break;
								}
								//cout << k << l << flag << " ";
								//cout << k << l << flag << color[i][j] << "-" << color[k][l] << " ";
							}
						}
					}
				}
				//cout << i << j << "end" << endl;
				if(flag == true) {
					cnt++;
					rx = i;
					ry = j;
				}
			}
		}
	}
	//cout << cnt << endl;
	if(cnt == 1) {
		cout << "(" << ry + 1 << ", " << rx + 1 << "): " << color[rx][ry];
	} else if(cnt > 1) {
		cout << "Not Unique";
	} else {
		cout << "Not Exist";
	}

	return 0;
}
