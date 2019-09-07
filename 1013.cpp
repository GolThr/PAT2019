#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int i, j, m, n, harf, cnt = 1, printCnt = 0;
	
	cin >> m >> n;
	if(m == 1){
		cout << 2;
		if(n != 1){
			cout << " ";
		}
		printCnt++;
	}
	for(i = 3; true; i++){
		harf = sqrt(i) + 1;
		for(j = 2; j < harf; j++){
			if(i % j == 0){
				break;
			}
		}
		if(j >= harf){
			cnt++;
			if(cnt >= m && cnt <= n){
				printCnt++;
				if(printCnt % 10 != 0){
					cout << i;
					if(cnt != n){
						cout << " ";
					}
				}else{
					cout << i << endl;
				}
			}else if(cnt > n){
				break;
			}
		}
	}
	
	return 0;
} 
