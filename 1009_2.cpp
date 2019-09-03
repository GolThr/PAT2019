#include <iostream>
using namespace std;

void printStr(string str, int start){
	int i, j;
	
	for(i = start; str[i]; i++){
		if(str[i + 1] == ' ' || str[i + 1] == '\0'){
			printStr(str, i + 2);
			for(j = start; j <= i; j++){
				cout << str[j];
			}
			if(start != 0){
				cout << " ";
			}
			return;
		}
	}
}

int main(){
	string str;
	
	getline(cin, str);
	printStr(str, 0);
	
	return 0;
}
