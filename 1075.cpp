#include <iostream>
using namespace std;

struct Node{
	int data;
	int next;
};

int main(){
	Node table[100010];
	int address, data, next, start, n, k, i, t;
	bool flag = false;
	
	cin >> start >> n >> k;
	for(i = 0; i < n; i++){
		cin >> address >> data >> next;
		table[address].data = data;
		table[address].next = next;
	}
	i = start;
	while(i != -1){
		if(table[i].data < 0){
			if(!flag){
				printf("%05d %d ", i, table[i].data);
				flag = true;
			}else{
				printf("%05d\n%05d %d ", i, i, table[i].data);
			}
		}
		i = table[i].next;
	}
	i = start;
	while(i != -1){
		if(table[i].data >= 0 && table[i].data <= k){
			if(!flag){
				printf("%05d %d ", i, table[i].data);
				flag = true;
			}else{
				printf("%05d\n%05d %d ", i, i, table[i].data);
			}
		}
		i = table[i].next;
	}
	i = start;
	while(i != -1){
		if(table[i].data > k){
			if(!flag){
				printf("%05d %d ", i, table[i].data);
				flag = true;
			}else{
				printf("%05d\n%05d %d ", i, i, table[i].data);
			}
		}
		i = table[i].next;
	}
	printf("-1");
	
	return 0;
}
