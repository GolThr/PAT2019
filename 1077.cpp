#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int n, m, i, j;
	float s_t, s, sum, max, min, cnt;
	
	cin >> n >> m;
	for(i = 0; i < n; i++){
		cin >> s_t;
		for(j = 0, max = 0, min = m + 1, sum = 0, cnt = 0; j < n - 1; j++){
			cin >> s;
			if(s >= 0 && s <= m){
				cnt++;
				sum += s;
				if(s > max){
					max = s;
				}
				if(s < min){
					min = s;
				}
			}
		}
		sum = (sum - max - min) / (cnt - 2);
		printf("%.0f\n", round((sum + s_t) / 2));
	}
	
	return 0;
} 
