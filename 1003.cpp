/*****************************
*ע�⣺
 1. cin>>n����getline(cin,str);����Ϊ������һ�еĻس��������ɿ��ǻ���cin��ȡ�ַ��� 
 2. ���е��������������ҹ���
 3. �ַ���str.find(char)���������ҵ�str�д�ͷ��ʼ��һ��char���ֵ��±꣨��0�ǣ�
 4. �ַ���str.length()�õ��ַ������ȣ���һλ����0������str="APAT"���򳤶�Ϊ4�� 
*�ο���
 1. [CSDN] PAT 1003. ��Ҫͨ���� 
	https://blog.csdn.net/ermua/article/details/79513355
 2. [����] PAT-B 1003. ��Ҫͨ����(20)
	https://www.jianshu.com/p/59ea02ed0c6c
*****************************/ 

#include <iostream>

using namespace std;

int main(){
	int n, i;
	string str;
	bool result = true;
	int cntP = 0, cntT = 0, firstP, firstT, cnt_a, cnt_b, cnt_c;
	
	cin >> n;
	while(n--){
		cin >> str;
		
		//Ϊÿ���жϳ�ʼ������ 
		cntP = cntT = 0;
		result = true;
		
		//����Ƿ����������ֻ����P��A��T������ĸ������ֻ��һ��P��T 
		for(i = 0; str[i]; i++){
			if(str[i] != 'P' && str[i] != 'A' && str[i] != 'T'){
				result = false;
				break;
			}
			if(str[i] == 'P'){
				cntP++;
				if(cntP > 1){
					result = false;
				}
			}
			if(str[i] == 'T'){
				cntT++;
				if(cntT > 1){
					result = false;
				}
			}
		}
		
		//�����������������ټ������������P��T֮��������һ��A����a��b��c����a*b=c 
		if(result){
			cnt_a = firstP = str.find('P');
			firstT = str.find('T');
			cnt_b = firstT - firstP - 1;
			cnt_c = str.length() - firstT - 1;
			if(cnt_b == 0){
				result = false;
			}
			if(cnt_a * cnt_b != cnt_c){
				result = false;
			}
		}
		
		//������ 
		if(result){
			cout << "YES" << endl;
		}else{
			cout << "NO" << endl;
		}
		
	}
	
	return 0;
} 
