/*****************************
*注意：
 1. 一元多项式存在没有常数项的可能性，不能以第二个数为零作为终止条件，故用while(cin >> a >> n){}解决 
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
