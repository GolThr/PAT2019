#include <iostream>
using namespace std;

bool isPal(string str){
	int i, j, len = str.length();
	if(str[0] == '0'){
		return false;
	}
	for(i = 0, j = len - 1; i < len; i++, j--){
		if(str[i] != str[j]){
			return false;
		}
	}
	return true;
}

int main(){
	int i, j, len, jin, cnt = 0;
	string str1, str2 = "", str3 = "";
	
	getline(cin, str1);
	len = str1.length();
	for(i = len - 1, j = 0; i >= 0; i--, j++){
		str2 += str1[i];
	}
	
	while(!isPal(str1) && cnt < 10){
		str3 = "";
		cout << str1 << " + " << str2 << " = ";
		for(i = 0, jin = 0; str1[i]; i++){
			str3 = (char)((((str1[i] - '0') + (str2[i] - '0') + jin) % 10) + '0') + str3;
			jin = ((str1[i] - '0') + (str2[i] - '0') + jin) / 10;
		}
		if(jin != 0){
			str3 = (char)(jin + '0') + str3;
		}
		cout << str3 << endl;
		str1 = str3;
		for(i = str1.length() - 1, j = 0, str2 = ""; i >= 0; i--, j++){
			str2 += str1[i];
		}
		cnt++;
	}
	if(cnt >= 10){
		cout << "Not found in 10 iterations.";
	}else{
		cout << str1 << " is a palindromic number.";
	}
	
	return 0;
}
