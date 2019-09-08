#include <iostream>
using namespace std;

int main(){
	string weekName[7] = {"MON", "TUE", "WED", "THU", "FRI", "SAT", "SUN"};
	string str1, str2, str3, str4;
	int i, sameCnt = 0;
	
	getline(cin, str1);
	getline(cin, str2);
	getline(cin, str3);
	getline(cin, str4);
	
	for(i = 0; str1[i] && str2[i]; i++){
		if(str1[i] == str2[i]){
			if(sameCnt == 0){
				if(str1[i] >= 'A' && str1[i] <= 'G'){
					sameCnt++;
					cout << weekName[str1[i] - 'A'] << " ";
				}
			}else{
				if((str1[i] >= 'A' && str1[i] <= 'N') || (str1[i] >= '0' && str1[i] <= '9')){
					sameCnt++;
					if(sameCnt == 2){
						if(str1[i] >= '0' && str1[i] <= '9'){
							cout << "0" << str1[i] << ":";
						}else{
							cout << str1[i] - 'A' + 10 << ":";
						}
						break;
					}
				}
			}
		}
	}
	for(i = 0; str3[i] && str4[i]; i++){
		if(str3[i] == str4[i]){
			if((str3[i] >= 'A' && str3[i] <= 'Z') || (str3[i] >= 'a' && str4[i] <= 'z')){
				if(i < 10){
					cout << "0" << i;
				}else{
					cout << i;
				}
			}
		}
	}
	
	return 0;
} 
