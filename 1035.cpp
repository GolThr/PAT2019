/*****************************
*注意：
 1. 可以用equal()方法比较容器中的两个区间内的元素。有3个参数first1，last1和first2。
    如果对于区间[first1, last1)内所有的first1+i，first1+i和first2所在位置处的元素都相等，
	则equal算法返回真，否则返回假。
 2. 首先是判断排序方法，根据插入排序的特征，前面部分为已排序的，后面的与原始序列是一样的。通
    过这个特征来判断是否是插入排序，然后不是插入排序的即为归并排序。 
 3. 将插入排序的序列多向后排序一位即可，用sort函数非常简单。 
 4. 难点在于输出归并排序的下一步，首先要模拟归并排序，当然不用完全按照归并排序来做，
    也可以调用sort方法会简单很多，首先按照两位两位一排序，排序后，与给定数列对比，
	若不同，则再次排序一轮，接着再和给定的数列对比，
	若不同，则再排序……直到相同后，再排序一轮，然后输出即可。 
*参考：
 1. [简书] PAT-B 1035. 插入与归并(25)
	https://www.jianshu.com/p/d6b4b0e10ccd
 2. [简书] [图解] 归并排序
	https://www.jianshu.com/p/33cffa1ce613
*****************************/ 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	int n, i, index, k = 1;
	bool isInsert = true, isSame = false;
	cin >> n;
	vector<int> origin(n), target(n);
	
	for(i = 0; i < n; i++){
		cin >> origin[i];
	}
	for(i = 0; i < n; i++){
		cin >> target[i];
	}
	
	for(i = 1; i < n; i++){
		if(target[i] < target[i - 1]){
			index = i;
			break;
		}
	}
	for(; i < n; i++){
		if(target[i] != origin[i]){
			isInsert = false;
			break;
		}
	}
	if(isInsert){
		//Insertion Sort
		cout << "Insertion Sort" << endl;
		sort(target.begin(), target.begin() + index + 1);
		cout << target[0];
		for(i = 1; i < n; i++){
			cout << " " << target[i];
		} 
	}else{
		cout << "Merge Sort" << endl;
		while(!isSame){
			k *= 2;
			if(equal(target.begin(), target.end(), origin.begin())){
				isSame = true;
			}
			for(i = 0; i < n / k; i++){
				sort(origin.begin() + i * k, origin.begin() + (i + 1) * k);
			}
			sort(origin.begin() + k * (n / k), origin.end());
		}
		cout << origin[0];
		for(i = 1; i < n; i++){
			cout << " " << origin[i];
		}
	}
	
	return 0;
} 
