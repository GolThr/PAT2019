#include <iostream>
using namespace std;

int main(){
	int i, j, n, k, s, cnt;
	cin >> n;
	int score[n];
	bool flag = false;
	
	for(i = 0; i < n; i++){
		cin >> score[i];
	}
	cin >> k;
	for(i = 0; i < k; i++){
		cin >> s;
		for(j = 0, cnt = 0; j < n; j++){
			if(score[j] == s){
				cnt++;
			}
		}
		if(flag){
			cout << " ";
		}
		cout << cnt;
		flag = true;
	}
	
	return 0;
} 
