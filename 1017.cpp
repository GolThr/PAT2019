#include <iostream>
using namespace std;

int main(){
	string a;
	int i, b, c, q, jin = 0;	//c被除数，q每位的商，jin进位（余数） 
	bool ifPrint = false;		//标记是否已经开始输出商 
	
	cin >> a >> b;
	for(i = 0; a[i]; i++){
		c = jin * 10 + (a[i] - '0');
		q = c / b;
		//如果还没有开始输出商，但是当前的结果是0，就不输出，记录进位并跳过本次循环 
		if(!ifPrint && q == 0){
			jin = c % b;
			continue;
		}
		//输出商，并标记已经开始输出商，记录进位 
		ifPrint = true;
		cout << q;
		jin = c % b;
	}
	//循环结束如果一直没有开始输出商，说明商是0，则输出0 
	if(!ifPrint){
		cout << "0";
	}
	//输出余数 
	cout << " " << jin;
	
	return 0;
} 
