#include <iostream>

using namespace std;

int main(){
	string n;
	string str[] = {"ling", "yi", "er", "san", "si", "wu", "liu", "qi", "ba", "jiu"};
	int i, sum = 0;
	int sum_t[4];
	
	//����n�����ַ���������n�ĸ�λ֮�͵õ�sum 
	getline(cin, n);
	for(i = 0; n[i]; i++){
		sum += n[i] - '0';
	}
//	for(i = 0; i < n.length(); i++){
//		sum += n[i] - '0';
//	}

	//��sumÿһλ��ֳ������õ��Ľ���ǵ���ģ�����ʱ�浽������ 
	for(i = 0; sum != 0; i++){
		sum_t[i] = sum % 10;
		sum /= 10;
	}
	
	//�Ѹյõ������鵹�Ŷ���������������������������Ӧ��ƴ�� 
	for(i-- ; i > 0; i--){
		cout << str[sum_t[i]] << " ";
	}
	//��Ϊ��ĿҪ�����һ����ĩ�������пո� 
	cout << str[sum_t[0]];
	
	return 0;
}
