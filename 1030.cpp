/*****************************
*注意：
 1. 数字重复的特殊情况，部分重复，全重复 
 2. 用int型，测试点5会报错，故用long类型 
*参考：
 1. [CSDN] PAT_B_1030 完美数列 （25 分）【测试点4超时】【测试点5报错】
	https://blog.csdn.net/id33749110/article/details/86244804
*****************************/ 

#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	long i, j, n, p, M, m, maxLen;
	cin >> n >> p;
	long num[n];
	for(i = 0; i < n; i++){
		cin >> num[i];
	}
	
	//排序
	sort(num, num + n);
	
	//初始化
	for(i = 0; i < n; i++){
		if(num[i] > num[0] * p){
			maxLen = i;
			break;
		}
	}
	if(i >= n){
		maxLen = n;
	}
	
	//遍历
	for(i = 1; i < n; i++){
		if(i + maxLen - 1 >= n){
			//越界，后面的循环不会再有满足条件的情况 
			break; 
		}
		M = num[i + maxLen - 1];
		m = num[i];
		if(M <= m * p){
			//满足条件
			for(j = i + maxLen - 1; j < n; j++){
				if(num[j] > m * p){
					maxLen = j - i;
					break;
				}
			} 
			if(j >= n){
				maxLen = n - i;
			}
		}
	}
	
	cout << maxLen;
	
	return 0;
} 
