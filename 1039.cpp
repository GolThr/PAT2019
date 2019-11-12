#include <iostream>
using namespace std;

int main(){
	string str1, str2;
	int i, j, len, lack = 0;
	
	getline(cin, str1);
	getline(cin, str2);
	len = str1.length();
	
	for(i = 0; str2[i]; i++){
		for(j = 0; j < len; j++){
			if(str2[i] == str1[j]){
				str1[j] = '-';
				break;
			}
		}
		if(j >= len){
			lack++;
		}
	}
	
	if(lack == 0){
		cout << "Yes " << len - str2.length();
	}else{
		cout << "No " << lack;
	}
	
	return 0;
} 
