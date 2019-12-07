#include <iostream> 
using namespace std;

int main(){
	string n;
	int cnt[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
	int i;
	
	getline(cin, n);
	for(i = 0; n[i]; i++){
		cnt[n[i] - '0']++;
	}
	
	for(i = 0; i < 10; i++){
		if(cnt[i] != 0){
			cout << i << ":" << cnt[i] << endl;
		}
	}
	
	return 0;
}
