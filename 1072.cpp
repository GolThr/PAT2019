/*****************************
*ע�⣺
 1. ��ſ��ܾ���0123���ֵģ�����֮��ǰ��0�ͻ᲻���ڡ�
*�ο���
 1. [CSDN] PTA 1072 ��ѧ���� (c++ map+˼·+���Ե�2)
	https://blog.csdn.net/qq_44622401/article/details/99694428
*****************************/ 

#include <iostream>
using namespace std;

int main(){
	int n, m, i, j, k, item, cnt_p = 0, cnt_it = 0;
	bool its[10010] = {false};
	bool flag = false;
	string name;
	
	cin >> n >> m;
	for(i = 0; i < m; i++){
		cin >> k;
		its[k] = true;
	}
	for(i = 0; i < n; i++){
		cin >> name >> k;
		for(j = 0, flag = false; j < k; j++){
			cin >> item;
			if(its[item]){
				if(!flag){
					cout << name << ": ";
					printf("%04d", item);
					//cout << name << ": " << item;
					cnt_p++;
					cnt_it++;
					flag = true;
				}else{
					printf(" %04d", item);
					//cout << " " << item;
					cnt_it++;
				}
			}
		}
		if(flag){
			cout << endl;
		}
	}
	cout << cnt_p << " " << cnt_it;
	
	return 0;
}
