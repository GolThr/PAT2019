#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int n){
	int i, harf;
	if(n == 1 || n == 2 || n == 3){
		return true;
	}else{
		harf = sqrt(n);
		for(i = 2; i <= harf; i++){
			if(n % i == 0){
				return false;
				break;
			}
		}
	}
	return true;
}

int main(){
	int i, j, k, n, id;
	int stu[10010] = {0};
	bool isChecked[10010] = {false};
	
	cin >> n;
	for(i = 0, j = 1; i < n; i++){
		cin >> id;
		stu[id] = j++;
	}
	cin >> k;
	for(i = 0; i < k; i++){
		cin >> id;
		if(stu[id] == 0){
			printf("%04d: Are you kidding?\n", id);
		}else if(!isChecked[id]){
			if(stu[id] == 1){
				printf("%04d: Mystery Award\n", id);
			}else if(isPrime(stu[id])){
				printf("%04d: Minion\n", id);
			}else{
				printf("%04d: Chocolate\n", id);
			}
			isChecked[id] = true;
		}else{
			printf("%04d: Checked\n", id);
		}
	}
	
	return 0;
}
