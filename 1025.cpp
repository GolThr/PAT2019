/*****************************
*ע�⣺
 1. ������������scanf��printf����Ϊcin��cout�л��档���Ե�ַ���ĳ���int���͡������Ե�5���г�ʱ��
*�ο���
 1. [CSDN] PAT 1025 ��ת���� (25)��STL-map+˼·+���Ե������
	https://blog.csdn.net/qq_40946921/article/details/81369679
*****************************/ 
#include <iostream>
#include <map>
using namespace std;
	
struct Node{
	int ad, data, next;
	Node(int a, int d, int n){
		ad = a;
		next = n;
		data = d;
	}
	Node(){}
};

Node da[100000];

int main(){
	map<int, Node> nodeList;
	map<int, Node>::iterator itr;
	int st, ad, next;
	int n, k, data, i, cnt = 0, p = 0;
	bool flag = true;
	
	scanf("%d%d%d", &st, &n, &k);
	for(i = 0; i < n; i++){
		scanf("%d%d%d", &ad, & data, &next);
		Node node(ad, data, next);
		pair<int, Node> value(ad, node); 
		nodeList.insert(value);
	}
	itr = nodeList.find(st);
	while(itr != nodeList.end()){
		cnt++;
		da[p++] = itr->second; 
		if(cnt % k == 0){
			for(i = p - 1; i >= 0; i--){
				if(flag){
					printf("%05d %d ", da[i].ad, da[i].data);
					flag = false;
				}else{
					printf("%05d\n%05d %d ", da[i].ad, da[i].ad, da[i].data);
				}
				if(i == 0 && cnt >= n){
					printf("%d", -1);
				}
			}
			p = 0;
		}
		itr = nodeList.find(itr->second.next);
	}
	for(i = 0; i < p; i++){
		if(flag){
			printf("%05d %d ", da[i].ad, da[i].data);
			flag = false;
		}else{
			printf("%05d\n%05d %d ", da[i].ad, da[i].ad, da[i].data);
		}
		if(i == p - 1){
			printf("%d", -1);
		}
	}
	
	return 0;
}
