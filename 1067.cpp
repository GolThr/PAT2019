/*****************************
*注意：
 1. 特殊情况：错误次数刚好等于允许尝试次数，恰好这个时候输入结束，需要再判断输出 Account locked 。 
*****************************/ 

#include <iostream>
using namespace std;

int main(){
	int n, i, j, cnt = 0;
	string cor_pwd, cus_pwd;
	
	cin >> cor_pwd >> n;
	getline(cin, cus_pwd);
	getline(cin, cus_pwd);
	while(cus_pwd != "#"){
		if(cnt < n){
			if(cus_pwd == cor_pwd){
				cout << "Welcome in" << endl;
				return 0;
			}else{
				cout << "Wrong password: " << cus_pwd << endl;
				cnt++;
			}
		}else{
			cout << "Account locked" << endl;
			return 0;
		}
		getline(cin, cus_pwd);
	}
	if(cnt >= n){
		cout << "Account locked" << endl;
	}
	
	return 0;
}
