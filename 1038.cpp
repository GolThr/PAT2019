/*****************************
*ע�⣺
 1. �ȴ���������ٲ��ң����һ�����Ե�����г�ʱ����1038_2.cpp���ʸ�Ϊ���������������±�ֱ�Ӽ����� 
 2. ���г�ʱ��˫��forѭ���Ժ󣬴���10^9 �ͳ�ʱ��
*�ο���
 1. [CSDN] PTA 1038 ͳ��ͬ�ɼ�ѧ���������ʱ���⣩
	https://blog.csdn.net/qq_42179526/article/details/88597839
 2. [����԰] PAT����1038. ͳ��ͬ�ɼ�ѧ��
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
