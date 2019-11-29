#include <iostream>
using namespace std;

int main(){
	string table, a, b;
	int result[21];
	int i, j, k, t, jin = 0, p = 0;
	bool flag = false;
	
	getline(cin, table);
	getline(cin, a);
	getline(cin, b);
	
	for(i = a.length() - 1, j = b.length() - 1, k = table.length() - 1; i >= 0 && j >= 0; i--, j--, k--){
		t = (table[k] - '0');
		if(t == 0){
			t = 10;
		}
		result[p++] = ((a[i] - '0') + (b[j] - '0') + jin) % t;
		jin = ((a[i] - '0') + (b[j] - '0') + jin) / t;
		//cout << a[i] << " " << b[j] << " " << table[k] << " " << result[p-1] << " " << jin << endl;
	}
	if(i < 0 && j >= 0){
		for(; j >= 0; j--, k--){
			t = (table[k] - '0');
			if(t == 0){
				t = 10;
			}
			result[p++] = ((b[j] - '0') + jin) % t;
			jin = ((b[j] - '0') + jin) / t;
		}
	}else if(j < 0 && i >= 0){
		for(; i >= 0; i--, k--){
			t = (table[k] - '0');
			if(t == 0){
				t = 10;
			}
			result[p++] = ((a[i] - '0') + jin) % t;
			jin = ((a[i] - '0') + jin) / t;
		}
	}
	while(jin != 0){
		if(k >= 0){
			t = (table[k] - '0');
			if(t == 0){
				t = 10;
			}
		}else{
			t = 10;
		}
		result[p++] = jin % t;
		jin /= t;
		k--;
	}
	for(i = p - 1; i >= 0; i--){
		if(result[i] == 0 && !flag){
			continue;
		}
		flag = true;
		cout << result[i];
	}
	if(!flag){
		cout << 0;
	}
	
	return 0;
} 
