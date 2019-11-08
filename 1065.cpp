#include <iostream>
using namespace std;

int main(){
	int n, k, i, a, b, cnt = 0;
	int mate[100010] = {0}, custom[100010] = {0};
	bool flag = false;
	
	cin >> n;
	for(i = 0; i < n; i++){
		cin >> a >> b;
		mate[a] = b;
		mate[b] = a;
	}
	cin >> k;
	int temp[k];
	for(i = 0; i < k; i++){
		cin >> temp[i];
		custom[temp[i]] = 1;
	}
	for(i = 0; i < k; i++){
		if(custom[mate[temp[i]]] == 1){
			custom[temp[i]]++;
			custom[mate[temp[i]]]++;
		}
	}
	for(i = 0; i < 100010; i++){
		if(custom[i] == 1){
			cnt++;
		}
	}
	cout << cnt << endl;
	for(i = 0; i < 100010; i++){
		if(custom[i] == 1){
			if(flag){
				cout << " ";
			}
			printf("%05d", i);
			flag = true;
		}
	}
	
	return 0;
}
