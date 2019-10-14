/*****************************
*注意：
 1. 先存完分数，再查找，最后一个测试点会运行超时，见1038_2.cpp。故改为将分数当做数组下标直接计数。 
 2. 运行超时，双重for循环以后，大于10^9 就超时了
*参考：
 1. [CSDN] PTA 1038 统计同成绩学生（解决超时问题）
	https://blog.csdn.net/qq_42179526/article/details/88597839
 2. [博客园] PAT——1038. 统计同成绩学生
	https://www.cnblogs.com/xiaxj/p/7991298.html
*****************************/ 

#include <iostream>
using namespace std;

int main(){
	int cnt[100001];
	int n, k, i, s;
	
	for(i = 0; i < 100001; i++){
		cnt[i] = 0;
	}
	
	cin >> n;
	for(i = 0; i < n; i++){
		cin >> s;
		cnt[s]++;
	} 
	cin >> k;
	for(i = 0; i < k - 1; i++){
		cin >> s;
		cout << cnt[s] << " ";
	}
	cin >> s;
	cout << cnt[s];
	
	
	
	return 0;
} 
