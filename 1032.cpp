/*****************************
*注意：
 1. 不能写类，写类会导致最后一个测试点运行超时，如1032_2.cpp
 2. 该题以空间换时间，直接将学校编号作为数组下标 
*****************************/ 

#include <iostream>
using namespace std;

int main(){
	int i, j, n, id, score, max;
	int sum[100010];
	
	for(i = 0; i < 100010; i++){
		sum[i] = 0;
	}
	cin >> n;
	
	for(i = 0; i < n; i++){
		cin >> id >> score;
		sum[id] += score;
	}
	for(i = 0, max = 0; i < 100010; i++){
		if(sum[i] > sum[max]){
			max = i;
		}
	}
	cout << max << " " << sum[max];
	
	return 0;
}
