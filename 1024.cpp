#include <iostream>
using namespace std;

int main(){
	string str;
	cin >> str;
	int p_index = str.find("."), e_index = str.find("E");
	int n = 0, i, j;
	//分解字符串 
	string a = str.substr(1, p_index - 1);
	string b = str.substr(p_index + 1, e_index - p_index - 1);
	string n_str = str.substr(e_index + 1);
	
	//获得指数，无符号 
	for(i = n_str.length() - 1, j = 1; i > 0; i--, j *= 10){
		n += (n_str[i] - '0') * j;
	}
	
	//小数点移动并输出 
	if(n_str[0] == '+'){
		//右移
		if(str[0] == '-'){
			cout << "-";
		} 
		cout << a;
		if(n < b.length()){
			for(i = 0; i < n; i++){
				cout << b[i];
			}
			cout << ".";
			for(; b[i]; i++){
				cout << b[i]; 
			}
		}else{
			for(i = 0; b[i]; i++){
				cout << b[i];
			}
			j = n - b.length(); //末尾还需补的0个数 
			for(i = 0; i < j; i++){
				cout << "0";
			}
		}
	}else{
		//左移 
		if(str[0] == '-'){
			cout << "-";
		} 
		if(n < a.length()){
			j = a.length() - n; //先输出的位数
			for(i = 0; i < j; i++){
				cout << a[i];
			} 
			cout << ".";
			for(i = 0; a[i]; i++){
				cout << a[i];
			}
		}else{
			j = n - a.length(); //需要在前面补的0个数
			cout << "0.";
			for(i = 0; i < j; i++){
				cout << "0";
			}
			cout << a;
		}
		cout << b;
	}
	
	return 0;
} 
