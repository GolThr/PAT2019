/*****************************
*ע�⣺
 1. ����д�࣬д��ᵼ�����һ�����Ե����г�ʱ����1032_2.cpp
 2. �����Կռ任ʱ�䣬ֱ�ӽ�ѧУ�����Ϊ�����±� 
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
