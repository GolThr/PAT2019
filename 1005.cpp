/*
*���һ�����Ե�δ�����Ϊnums����̫СԽ�� 
*/ 
#include <iostream>
#include <cstring>
using namespace std;

int main(){
	int k, n, t, i, j, p, q, keyNum;
	int nums[10000];
	int result[101];
	int keyNums[101];
	
	//��ʼ������ÿλΪ0 
	/*
	for(i = 0; i < 10000; i++){
		nums[i] = 0;
	}
	for(i = 0; i < 101; i++){
		result[i] = 0;
	}
	for(i = 0; i < 101; i++){
		keyNums[i] = 0;
	}
	*/ 
	memset(nums, 0, sizeof(nums));
	memset(result, 0, sizeof(result));
	memset(keyNums, 0, sizeof(keyNums));
	
	cin >> k;
	q = 0, p = 0;
	while(k--){
		cin >> n;
		//ÿ�������ж��Ƿ������nums�У�������ԣ�û�����¼��result���� 
		for(i = 0; nums[i] != n && i < p; i++);
		if(nums[i] == n){
			continue;
		}else{
			result[q++] = n;
			while(n != 1){
				if(n % 2 == 1){
					n = (3 * n + 1) / 2;
					nums[p++] = n;
				}else{
					n /= 2;
					nums[p++] = n;
				}
			}
		}
	}
	//���¼��result�е����Ƿ����������� 
	for(i = 0, keyNum = 0; i < q; i++){
		for(j = 0; nums[j] != result[i] && j < p; j++);
		if(nums[j] == result[i]){
			continue;
		}else{
			keyNums[keyNum++] = result[i];
		}
	}
	//ð������ 
	for(i = 0; i < keyNum; i++){
		for(j = i + 1; j < keyNum; j++){
			if(keyNums[j] > keyNums[i]){
				t = keyNums[j];
				keyNums[j] = keyNums[i];
				keyNums[i] = t;
			}
		}
	}
	//��� 
	for(i = 0; i < keyNum - 1; i++){
		cout << keyNums[i] << " ";
	}
	cout << keyNums[i];
	
	return 0;
} 
