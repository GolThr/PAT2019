/*****************************
*ע�⣺
 1. �����ظ�����������������ظ���ȫ�ظ� 
 2. ��int�ͣ����Ե�5�ᱨ������long���� 
*�ο���
 1. [CSDN] PAT_B_1030 �������� ��25 �֣������Ե�4��ʱ�������Ե�5����
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
	
	//����
	sort(num, num + n);
	
	//��ʼ��
	for(i = 0; i < n; i++){
		if(num[i] > num[0] * p){
			maxLen = i;
			break;
		}
	}
	if(i >= n){
		maxLen = n;
	}
	
	//����
	for(i = 1; i < n; i++){
		if(i + maxLen - 1 >= n){
			//Խ�磬�����ѭ����������������������� 
			break; 
		}
		M = num[i + maxLen - 1];
		m = num[i];
		if(M <= m * p){
			//��������
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
