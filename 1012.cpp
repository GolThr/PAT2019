#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	int i, N, num, A1 = 0, A2 = 0, A3 = 0, A5 = 0, A4_cnt = 0;
	float A4 = 0;
	bool flag = true, hasA2 = false;
	
	cin >> N;
	for(i = 0; i < N; i++){
		cin >> num;
		if(num % 5 == 0){
			if(num % 2 == 0){
				A1 += num;
			}
		}else if(num % 5 == 1){
			hasA2 = true;
			if(flag){
				A2 += num;
				flag = false;
			}else{
				A2 -= num;
				flag = true;
			}
		}else if(num % 5 == 2){
			A3++;
		}else if(num % 5 == 3){
			A4 += num;
			A4_cnt++;
		}else if(num % 5 == 4){
			if(num > A5){
				A5 = num;
			}
		}
	}
	
	if(A1 != 0){
		cout << A1 << " ";
	}else{
		cout << "N ";
	}
	if(hasA2){
		cout << A2 << " ";
	}else{
		cout << "N ";
	}
	if(A3 != 0){
		cout << A3 << " ";
	}else{
		cout << "N ";
	}
	if(A4_cnt != 0){
		cout << fixed << setprecision(1) << A4 / A4_cnt << " ";
	}else{
		cout << "N ";
	}
	if(A5 != 0){
		cout << A5;
	}else{
		cout << "N";
	}
	
	return 0;
} 
