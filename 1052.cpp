/*****************************
*ע�⣺
 1. ÿ���������ַ����������ַ�����ÿ���ַ���һ����ASCII������棻 
 2. ������Ľ�������ţ� 
 3. ��β��һ��'\\'�з�б�ܣ�Ҫ���ϣ���Ȼ�����
*�ο���
 1. [CSDN] pat-1052���Ҽ���ϸ��+��ʽ��
	https://blog.csdn.net/qq_41829060/article/details/88895383
*****************************/ 

#include <iostream>
using namespace std;

int main(){
	string hand_str, eye_str, mouth_str, str;
	string hand[12], eye[12], mouth[12];
	int k, t, i, j, lh, le, mo, re, rh, h = 0, e = 0, m = 0;
	bool flag;
	
	getline(cin, hand_str);
	getline(cin, eye_str);
	getline(cin, mouth_str);
	for(i = 0; hand_str[i]; i++){
		if(hand_str[i] == '['){
			for(j = i + 1, str = ""; hand_str[j] != ']' && hand_str[j]; j++){
				str += hand_str[j];
			}
			hand[h++] = str;
			i = j - 1;
		}
	}
	for(i = 0; eye_str[i]; i++){
		if(eye_str[i] == '['){
			for(j = i + 1, str = ""; eye_str[j] != ']' && eye_str[j]; j++){
				str += eye_str[j];
			}
			eye[e++] = str;
			i = j - 1;
		}
	}
	for(i = 0; mouth_str[i]; i++){
		if(mouth_str[i] == '['){
			for(j = i + 1, str = ""; mouth_str[j] != ']' && mouth_str[j]; j++){
				str += mouth_str[j];
			}
			mouth[m++] = str;
			i = j - 1;
		}
	}
	
	cin >> k;
	for(i = 0; i < k; i++){
		cin >> lh >> le >> mo >> re >> rh;
		if(lh <= h && le <= e && mo <= m && re <= e && rh <= h && lh > 0 && le > 0 && mo > 0 && re > 0 && rh > 0){
			cout << hand[lh - 1] << "(" << eye[le - 1] << mouth[mo - 1] << eye[re - 1] << ")" << hand[rh - 1];
		}else{
			cout << "Are you kidding me? @\\/@";
		}
		cout << endl;
	}
	
	return 0;
}
