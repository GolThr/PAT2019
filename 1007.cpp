/*****************************
*注意：
 1. 提交后最后一个测试点运行超时，解决方法是在判断素数时精简
 2. 只能被1和自身整除的数是素数，1不是素数
 3. 判断素数时，只需判断该素数一半数是否整除它即可（如5，只需判断5是否被1,2,3，即5的开方） 
*****************************/ 

#include<iostream>
#include<cmath>
using namespace std;

int main(){
	int i, j, n, harf, pre = 2, cnt = 0;
	bool isPrime = true;
	
	cin >> n;
	//因为1不是素数，2默认到pre中了即2前面没有素数是第一个素数，所以从3开始判断 
	for(i = 3; i <= n; i++){
		isPrime = true;
		//下面判断用来提高判断速度 
		if(i == 2 || i == 3 || i == 5 || i == 7){
			isPrime = true;
		}else if(i == 1){
			isPrime = false;
		}else{
			//判断是否为素数 
			harf = sqrt(i);
			for(j = 2; j <= harf; j++){
				if(i % j == 0){
					isPrime = false;
					break;
				}
			}
		}
		
		//如果是素数就记录这个素数，如果满足要求就计数加1 
		if(isPrime){
			if(i - pre == 2){
				cnt++;
			}
			pre = i;
		}
	}
	
	//输出 
	cout << cnt;
	
	return 0;
} 
