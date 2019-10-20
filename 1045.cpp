/*****************************
*注意：
 1. 开始的思路是先排序，如果后排序后位置相同就是主元，但这并不是对的。如
    输入 3 2 4 5 1，按照这种判断，2是主元，但是2并不是主元。
 2. 正确的做法应该是用一个数组来记录当前这个数是否是它之前所有数中的最大值，且满足上面的条件，则它就是主元。
 3. 坑点：当没有元素是主元时，第二行应输出空行并回车。
*参考：
 1. [CSDN] PAT乙级1045
	https://blog.csdn.net/DoctorLDQ/article/details/86537215
 2. [简书] PAT 1045 快速排序 （25 分)
	https://www.jianshu.com/p/28c57be5e45a
*****************************/ 

#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	int i, n, cnt = 0, p = 0;
	cin >> n;
	long num[n], num_sort[n], result[n], max = 0;
	
	for(i = 0; i < n; i++){
		cin >> num[i];
		num_sort[i] = num[i];
	}
	
	sort(num_sort, num_sort + n);
	
	for(i = 0; i < n; i++){
		if(num_sort[i] == num[i] && num[i] >= max){
			cnt++;
			result[p++] = num[i];
		}else if(num[i] > max){
			max = num[i];
		}
	}
	
	cout << cnt << endl;
	for(i = 0; i < cnt; i++){
		if(i != 0){
			cout << " ";
		}
		cout << result[i];
	}
	cout << endl;
	
	return 0;
} 
