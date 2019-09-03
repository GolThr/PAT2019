#include<iostream>
using namespace std;

int main(){
	string str;
	int i, j, len;
	
	getline(cin, str);
	len = str.length();
	for(i = len - 1; i >= 0; i--){
		if(str[i] == ' '){
			for(j = i + 1; j < len; j++){
				cout << str[j];
			}
			cout << " ";
			len = i;
		}
	}
	for(i = 0; i < len; i++){
		cout << str[i];
	}
	
	return 0;
}
