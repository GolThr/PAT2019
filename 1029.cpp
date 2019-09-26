#include <iostream>
using namespace std;

int main(){
	string str1, str2;
	int i, j, len, cnt = 0;
	char c;
	char isPrint[81]; 
	
	getline(cin, str1);
	getline(cin, str2);
	
	len = str2.length();
	
	for(i = 0; str1[i]; i++){
		for(j = 0, c = str1[i]; j < len; j++){
			if(str2[j] == c){
				break;
			}
		}
		if(j >= len){
			//该字符坏掉了
			//先转成大写字母 
			if(c >= 'a' && c <= 'z'){
				c -= 32;
			}
			//判断是否输出过 
			for(j = 0; j < cnt; j++){
				if(isPrint[j] == c){
					break;
				}
			}
			if(j >= cnt){
				//没有输出过，就输出，并记录到已输出数组isPrint中 
				cout << c; 
				isPrint[cnt++] = c;
			}
		}
	}
	
	return 0;
} 
