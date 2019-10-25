/*****************************
*注意：
 1. int乘以double需保证是double类型，因此k数组定义为double 
*参考：
 1. [CSDN] PAT_B_1049 数列的片段和 （20 分）【后两个测试点】
	https://blog.csdn.net/id33749110/article/details/86509596
*****************************/ 

#include <iostream>
using namespace std;

int main(){
	int i, j, n, p, t;
	cin >> n;
	double sum = 0;
	double num[n];
	double k[n];
	
	for(i = 0; i < n; i++){
		k[i] = 0;
	}
	for(i = 0; i < n; i++){
		cin >> num[i];
	}
	k[0] = k[n - 1] = n;
	for(i = 1, t = n - 2, j = n - 2; t > 0; i++, j--, t -= 2){
		k[i] = k[i - 1] + t;
		k[j] = k[j + 1] + t;
	}
	for(; k[i] == 0; i++){
		k[i] = k[i - 1];
	}
	for(; k[i] == 0; i++){
		k[i] = k[i - 1];
	}
	for(i = 0; i < n; i++){
		sum += k[i] * num[i];
	}
	
	printf("%.2f", sum);
	
	return 0;
}
