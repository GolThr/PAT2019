#include <iostream>
using namespace std;

int main(){
	int i, j, n, d, k, cnt;
	double e, E, PREM_cnt = 0, EMPTY_cnt = 0;
	
	cin >> n >> e >> d;
	for(i = 0; i < n; i++){
		cin >> k;
		for(j = 0, cnt = 0; j < k; j++){
			cin >> E;
			if(E < e){
				cnt++;
			}
		}
		if(cnt > k / 2){
			if(k > d){
				EMPTY_cnt++;
			}else{
				PREM_cnt++;
			}
		}
	}
	printf("%.1f%% %.1f%%", 100 * PREM_cnt / n, 100 * EMPTY_cnt / n);
	
	return 0;
} 
