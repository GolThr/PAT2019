/*****************************
*注意：
 1. 输入的区间不一定是按照由小到大的顺序，需要判断大小，否则测试点1答案错误 
*参考：
 1. [CSDN] PAT-B 1062. 最简分数
	https://blog.csdn.net/plank_root/article/details/54137248
*****************************/ 

#include <iostream>
#include <algorithm>
using namespace std;

bool isSimp(int a, int b){
	int t;
	while(b != 0){
		t = b;
		b = a % b;
		a = t;
	}
	if(a != 1){
		return false;
	}
	return true;
}

int main(){
	float k, n1, m1, n2, m2, r1, r2, t;
	int i, j = 0;
	int ans[1010] = {0};
	
	scanf("%f/%f%f/%f%f", &n1, &m1, &n2, &m2, &k);
	r1 = n1 * k / m1;
	r2 = n2 * k / m2;
	
	if(r1 > r2){
		t = r1;
		r1 = r2;
		r2 = t;
	}
	
	for(i = (int)r1 + 1; i < r2; i++){
		if(isSimp(i, k)){
			ans[j++] = i;
		}
	}
	sort(ans, ans + j);
	for(i = 0; i < j; i++){
		if(i != 0){
			cout << " ";
		}
		cout << ans[i] << "/" << k;
	}
	
	return 0;
}
