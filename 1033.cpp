#include <iostream>
using namespace std;

int main(){
	string a, str;
	bool wShift = false, isPrint = false;
	int i, j, alen;
	char c;
	
	getline(cin, a);
	getline(cin, str);
	
	alen = a.length();
	for(i = 0; a[i]; i++){
		if(a[i] == '+'){
			wShift = true;
		}
	}
	
	for(i = 0; str[i]; i++){
		c = str[i];
		if(c >= 'a' && c <= 'z'){
			c -= 32;
		}
		for(j = 0; j < alen; j++){
			if(a[j] == c){
				break;
			}
		}
		if(j >= alen){
			//û�л�
			if((str[i] >= 'A' && str[i] <= 'Z') && wShift){
				//�ϵ������ˣ��������д��ĸ 
			}else{
				isPrint = true;
				cout << str[i];
			}
		}
	}
	
	if(!isPrint){
		cout << endl;
	}
	
	return 0;
} 
