#include <iostream>
using namespace std;

int main(){
	int n, i;
	string str;
	
	cin >> n;
	for(i = 0; i < n * 4; i++){
		cin >> str;
		if(str[2] == 'T'){
			cout << str[0] - 'A' + 1;
		}
	}
	
	return 0;
} 
