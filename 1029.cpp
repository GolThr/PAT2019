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
			//���ַ�������
			//��ת�ɴ�д��ĸ 
			if(c >= 'a' && c <= 'z'){
				c -= 32;
			}
			//�ж��Ƿ������ 
			for(j = 0; j < cnt; j++){
				if(isPrint[j] == c){
					break;
				}
			}
			if(j >= cnt){
				//û��������������������¼�����������isPrint�� 
				cout << c; 
				isPrint[cnt++] = c;
			}
		}
	}
	
	return 0;
} 
