#include <iostream>
using namespace std;

int main(){
	int n, i, j, sum, cnt = 0;
	bool flag = false;
	bool fri_num[10010] = {false};
	string num;
	
	cin >> n;
	for(i = 0; i < n; i++){
		cin >> num;
		for(j = 0, sum = 0; num[j]; j++){
			sum += num[j] - '0';
		}
		fri_num[sum] = true;
	}
	
	for(i = 0; i < 10010; i++){
		if(fri_num[i]){
			cnt++;
		}
	}
	cout << cnt << endl;
	for(i = 0; i < 10010; i++){
		if(fri_num[i]){
			if(flag){
				cout << " ";
			}
			cout << i;
			flag = true;
		}
	}
	
	return 0;
}
