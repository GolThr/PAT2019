#include <iostream>
using namespace std;

int main(){
	int n, i, j, cnt_e, cnt_n, cnt_p, cnt_else;
	string str;
	
	cin >> n;
	getchar();
	for(i = 0; i < n; i++){
		getline(cin, str);
		cnt_e = cnt_n = cnt_p = cnt_else = 0;
		if(str.length() < 6){
			cout << "Your password is tai duan le." << endl;
		}else{
			for(j = 0; str[j]; j++){
				if((str[j] >= 'a' && str[j] <= 'z') || (str[j] >= 'A' && str[j] <= 'Z')){
					cnt_e++;
				}else if(str[j] >= '0' && str[j] <= '9'){
					cnt_n++;
				}else if(str[j] == '.'){
					cnt_p++;
				}else{
					cnt_else++;
				}
			}
			if(cnt_else > 0){
				cout << "Your password is tai luan le." << endl;
			}else if(cnt_e > 0 && cnt_n <= 0){
				cout << "Your password needs shu zi." << endl;
			}else if(cnt_e <= 0 && cnt_n > 0){
				cout << "Your password needs zi mu." << endl;
			}else{
				cout << "Your password is wan mei." << endl;
			}
		}
	}
	
	return 0;
} 
