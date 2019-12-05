#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int n, i, cnt = 0;
	int res[100010] = {0};
	
	cin >> n;
	for(i = 1; i <= n; i++){
		res[int(floor(i / 2.0) + floor(i / 3.0) + floor(i / 5.0))]++;
	}
	for(i = 0; i < 100010; i++){
		if(res[i] != 0){
			cnt++;
		}
	}
	cout << cnt;
	
	return 0;
} 
