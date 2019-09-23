#include <iostream>
using namespace std;

int main(){
	int n, i, j, cnt, t;
	char c;
	
	cin >> n >> c;
	if(n == 1){
		cout << c << endl << 0;
		return 0;
	}
	for(i = 1, cnt = 0; cnt + 2 * i <= n; i += 2){
		if(i != 1){
			cnt += 2 * i;
		}else{
			cnt += i;
		}
	}
	t = i - 2;	//记录所有行中输出符号个数的最大值 
	for(i = t; i != 1; i -= 2){
		for(j = 0; j < (t - i) / 2; j++){
			cout << " ";
		}
		for(j = 0; j < i; j++){ 
			cout << c;
		}
		cout << endl;
	}
	for(i = 1; i <= t; i += 2){
		for(j = 0; j < (t - i) / 2; j++){
			cout << " ";
		}
		for(j = 0; j < i; j++){
			cout << c;
		}
		cout << endl;
	}
	cout << n - cnt;
	
	return 0;
} 
