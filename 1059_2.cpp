#include <iostream>
#include <cmath>
using namespace std;

struct Student{
	string id;
	bool isChecked = false;
};

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
		if(i > harf){
			return true;
		}
	}
	return false;
}

int main(){
	int i, j, k, n;
	cin >> n;
	string str;
	Student id[n];
	
	for(i = 0; i < n; i++){
		cin >> id[i].id;
	}
	cin >> k;
	for(i = 0; i < k; i++){
		cin >> str;
		for(j = 0; j < n; j++){
			if(str == id[j].id){
				if(!id[j].isChecked){
					if(j == 0){
						cout << id[j].id << ": Mystery Award" << endl;
					}else if(isPrime(j + 1)){
						cout << id[j].id << ": Minion" << endl;
					}else{
						cout << id[j].id << ": Chocolate" << endl;
					}
					id[j].isChecked = true;
				}else{
					cout << str << ": Checked" << endl;
				}
				break;
			}
		}
		if(j >= n){
			cout << str << ": Are you kidding?" << endl;
		}
	}
	
	return 0;
}
