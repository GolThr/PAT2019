/*****************************
*ע�⣺
 1. ��ʼ��˼·������������������λ����ͬ������Ԫ�����Ⲣ���ǶԵġ���
    ���� 3 2 4 5 1�����������жϣ�2����Ԫ������2��������Ԫ��
 2. ��ȷ������Ӧ������һ����������¼��ǰ������Ƿ�����֮ǰ�������е����ֵ�����������������������������Ԫ��
 3. �ӵ㣺��û��Ԫ������Ԫʱ���ڶ���Ӧ������в��س���
*�ο���
 1. [CSDN] PAT�Ҽ�1045
	https://blog.csdn.net/DoctorLDQ/article/details/86537215
 2. [����] PAT 1045 �������� ��25 ��)
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
