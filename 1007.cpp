/*****************************
*ע�⣺
 1. �ύ�����һ�����Ե����г�ʱ��������������ж�����ʱ����
 2. ֻ�ܱ�1����������������������1��������
 3. �ж�����ʱ��ֻ���жϸ�����һ�����Ƿ����������ɣ���5��ֻ���ж�5�Ƿ�1,2,3����5�Ŀ����� 
*****************************/ 

#include<iostream>
#include<cmath>
using namespace std;

int main(){
	int i, j, n, harf, pre = 2, cnt = 0;
	bool isPrime = true;
	
	cin >> n;
	//��Ϊ1����������2Ĭ�ϵ�pre���˼�2ǰ��û�������ǵ�һ�����������Դ�3��ʼ�ж� 
	for(i = 3; i <= n; i++){
		isPrime = true;
		//�����ж���������ж��ٶ� 
		if(i == 2 || i == 3 || i == 5 || i == 7){
			isPrime = true;
		}else if(i == 1){
			isPrime = false;
		}else{
			//�ж��Ƿ�Ϊ���� 
			harf = sqrt(i);
			for(j = 2; j <= harf; j++){
				if(i % j == 0){
					isPrime = false;
					break;
				}
			}
		}
		
		//����������ͼ�¼����������������Ҫ��ͼ�����1 
		if(isPrime){
			if(i - pre == 2){
				cnt++;
			}
			pre = i;
		}
	}
	
	//��� 
	cout << cnt;
	
	return 0;
} 
