/*****************************
*ע�⣺
 1. ������equal()�����Ƚ������е����������ڵ�Ԫ�ء���3������first1��last1��first2��
    �����������[first1, last1)�����е�first1+i��first1+i��first2����λ�ô���Ԫ�ض���ȣ�
	��equal�㷨�����棬���򷵻ؼ١�
 2. �������ж����򷽷������ݲ��������������ǰ�沿��Ϊ������ģ��������ԭʼ������һ���ġ�ͨ
    ������������ж��Ƿ��ǲ�������Ȼ���ǲ�������ļ�Ϊ�鲢���� 
 3. ��������������ж��������һλ���ɣ���sort�����ǳ��򵥡� 
 4. �ѵ���������鲢�������һ��������Ҫģ��鲢���򣬵�Ȼ������ȫ���չ鲢����������
    Ҳ���Ե���sort������򵥺ܶ࣬���Ȱ�����λ��λһ�����������������жԱȣ�
	����ͬ�����ٴ�����һ�֣������ٺ͸��������жԱȣ�
	����ͬ���������򡭡�ֱ����ͬ��������һ�֣�Ȼ��������ɡ� 
*�ο���
 1. [����] PAT-B 1035. ������鲢(25)
	https://www.jianshu.com/p/d6b4b0e10ccd
 2. [����] [ͼ��] �鲢����
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
