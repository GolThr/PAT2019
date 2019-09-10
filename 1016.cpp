#include <iostream>
using namespace std;

int main(){
	string a, b;
	int i, da, db, pa = 0, pb = 0, cnt = 0;
	
	cin >> a >> da >> b >> db;
	for(i = 0; a[i]; i++){
		if(a[i] - '0' == da){
			cnt++;
		}
	}
	for(i = 0; i < cnt; i++){
		pa = pa * 10 + da;
	}
	cnt = 0;
	for(i = 0; b[i]; i++){
		if(b[i] - '0' == db){
			cnt++;
		}
	}
	for(i = 0; i < cnt; i++){
		pb = pb * 10 + db;
	}
	cout << pa + pb;
	
	return 0;
} 
