#include <iostream>
using namespace std;

int main(){
	int i, j;
	string a, b;
	bool isHas[200] = {false};
	
	getline(cin, a);
	getline(cin, b);
	
	for(i = 0; a[i]; i++){
		if(!isHas[(int)a[i]]){
			cout << a[i];
			isHas[(int)a[i]] = true;
		}
	}
	for(i = 0; b[i]; i++){
		if(!isHas[(int)b[i]]){
			cout << b[i];
			isHas[(int)b[i]] = true;
		}
	}
	
	return 0;
}
