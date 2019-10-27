#include <iostream>
#include <sstream>
using namespace std;

int main(){
	int n, i, p_cnt, f_cnt, cnt = 0;
	float a, sum = 0;
	string str;
	stringstream ss;
	bool flag = true;
	
	cin >> n;
	while(n--){
		cin >> str;
		if((str[0] >= '0' && str[0] <= '9') || str[0] == '-'){
			for(i = 1, p_cnt = 0, f_cnt = 0, flag = true; str[i]; i++){
				if(p_cnt == 1){
					f_cnt++;
				}
				if(str[i] == '.'){
					p_cnt++;
				}
				if(!(str[i] >= '0' && str[i] <= '9') && str[i] != '.'){
					flag = false;
				}
			}
			if(flag && p_cnt <= 1 && f_cnt <= 2){
				ss.clear();
				ss << str;
				ss >> a;
				if(a >= -1000 && a <= 1000){
					//·ûºÏÒªÇó
					cnt++;
					sum += a;
				}else{
					cout << "ERROR: " << str << " is not a legal number" << endl;
				}
			}else{
				cout << "ERROR: " << str << " is not a legal number" << endl;
			}
		}else{
			cout << "ERROR: " << str << " is not a legal number" << endl;
		}
	}
	if(cnt == 1){
		printf("The average of 1 number is %.2f", sum / cnt);
	}else if(cnt != 0){
		printf("The average of %d numbers is %.2f", cnt, sum / cnt);
	}else{
		printf("The average of 0 numbers is Undefined", cnt);
	}
	
	
	return 0;
} 
