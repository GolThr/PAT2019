#include <iostream>
#include <sstream>
using namespace std;

int main(){
	string str;
	string trans[13] = {"tret", "jan", "feb", "mar", "apr", "may", "jun", "jly", "aug", "sep", "oct", "nov", "dec"};
	string trans_jin[13] = {"", "tam", "hel", "maa", "huh", "tou", "kes", "hei", "elo", "syy", "lok", "mer", "jou"};
	int i, j, n, num;
	
	cin >> n;
	cin.clear(); 
    cin.ignore();//后面用getline，所以要清空cin流
    
	for(i = 0; i < n; i++){
		getline(cin, str);	//输入每行
		if(str[0] >= '0' && str[0] <= '9'){		//如果第一位是数字开头，说明是数字转火星文
			stringstream ss;
            ss << str;
            ss >> num;
            if(num < 13){
                cout << trans[num] << endl;
            }else{
                if(num % 13 == 0){
                    cout << trans_jin[num / 13] << endl;
                }else{
                    cout << trans_jin[num / 13] << " " << trans[num % 13] << endl;
                }
            }
		}else{
			if(str.length() > 3){
				num = 0;
				for(j = 0; j < 13; j++){
					if(equal(str.begin(), str.begin() + 3, trans_jin[j].begin())){
						num += j * 13;
						break;
					}
				}
				for(j = 0; j < 13; j++){
					if(equal(str.begin() + 4, str.end(), trans[j].begin())){
						num += j;
						break;
					}
				}
				cout << num << endl;
			}else{
				for(j = 0; j < 13; j++){
					if(str == trans_jin[j]){
						cout << j * 13 << endl;
						break;
					}
				}
				for(j = 0; j < 13; j++){
					if(str == trans[j]){
						cout << j << endl;
						break;
					}
				}
			}
		}
	}
	
	return 0;
} 
