/*****************************
*ע�⣺
 1. ���մ�����ע�͵���һ�лῨһ�����г�ʱ�ĵ㣬�������ַ������صġ�+���Ƚ�����
 2. ��ʹ��Dev-C++����������֧��C++11 
*�ο���
 1. [CSDN] PAT-B1084 ������У�20 �֣�
	https://blog.csdn.net/qq_38127801/article/details/81225953
 2. [CSDN] ��Dev C++֧��C++11
	https://blog.csdn.net/u011500062/article/details/44628441
*****************************/ 

#include <iostream>
using namespace std;

int main(){
	int n, i, j, k, cnt;
	string str, res = "";
	
	cin >> str >> n;
	for(i = 1; i < n; i++){
		for(j = 1, cnt = 1, res = ""; str[j]; j++){
			if(str[j] == str[j - 1]){
				cnt++;
			}else{
				res += to_string((str[j - 1] - '0') * 10 + cnt);
				//res = res + str[j - 1] + (char)(cnt + '0');
				cnt = 1;
			}
		}
		//str = res + str[j - 1] + (char)(cnt + '0');
		str = res + to_string((str[j - 1] - '0') * 10 + cnt);
	}
	cout << str;
	
	return 0;
} 
