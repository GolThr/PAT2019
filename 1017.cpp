#include <iostream>
using namespace std;

int main(){
	string a;
	int i, b, c, q, jin = 0;	//c��������qÿλ���̣�jin��λ�������� 
	bool ifPrint = false;		//����Ƿ��Ѿ���ʼ����� 
	
	cin >> a >> b;
	for(i = 0; a[i]; i++){
		c = jin * 10 + (a[i] - '0');
		q = c / b;
		//�����û�п�ʼ����̣����ǵ�ǰ�Ľ����0���Ͳ��������¼��λ����������ѭ�� 
		if(!ifPrint && q == 0){
			jin = c % b;
			continue;
		}
		//����̣�������Ѿ���ʼ����̣���¼��λ 
		ifPrint = true;
		cout << q;
		jin = c % b;
	}
	//ѭ���������һֱû�п�ʼ����̣�˵������0�������0 
	if(!ifPrint){
		cout << "0";
	}
	//������� 
	cout << " " << jin;
	
	return 0;
} 
