/*****************************
*ע�⣺
 1. һԪ����ʽ����û�г�����Ŀ����ԣ������Եڶ�����Ϊ����Ϊ��ֹ����������while(cin >> a >> n){}��� 
*****************************/ 

#include <iostream>
using namespace std;

int main(){
	int a, n;
	bool start = true;
	
	while(cin >> a >> n){
		if(a * n != 0){
			if(start){
				cout << a * n << " " << n - 1;
			}else{
				cout << " " << a * n << " " << n - 1;
			}
			start = false;
		}else if(start){
			cout << "0 0";
			break;
		}
	}	
	
	return 0;
}
