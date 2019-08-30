#include <iostream>

using namespace std;

int main(){
	string n;
	string str[] = {"ling", "yi", "er", "san", "si", "wu", "liu", "qi", "ba", "jiu"};
	int i, sum = 0;
	int sum_t[4];
	
	//输入n存入字符串，并求n的各位之和得到sum 
	getline(cin, n);
	for(i = 0; n[i]; i++){
		sum += n[i] - '0';
	}
//	for(i = 0; i < n.length(); i++){
//		sum += n[i] - '0';
//	}

	//将sum每一位拆分出来（得到的结果是倒序的），暂时存到数组中 
	for(i = 0; sum != 0; i++){
		sum_t[i] = sum % 10;
		sum /= 10;
	}
	
	//把刚得到的数组倒着读出来，并根据所存的数字输出相应的拼音 
	for(i-- ; i > 0; i--){
		cout << str[sum_t[i]] << " ";
	}
	//因为题目要求最后一行行末不允许有空格 
	cout << str[sum_t[0]];
	
	return 0;
}
