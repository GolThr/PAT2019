#include <iostream>
using namespace std;

int main(){
	string str;
	int cnt[6];
	int i, j, max;
	char c[6] = {'P', 'A', 'T', 'e', 's', 't'};
	
	for(i = 0; i < 6; i++){
		cnt[i] = 0;
	}
	
	getline(cin, str);
	for(i = 0; str[i]; i++){
		if(str[i] == 'P'){
			cnt[0]++;
		}else if(str[i] == 'A'){
			cnt[1]++;
		}else if(str[i] == 'T'){
			cnt[2]++;
		}else if(str[i] == 'e'){
			cnt[3]++;
		}else if(str[i] == 's'){
			cnt[4]++;
		}else if(str[i] == 't'){
			cnt[5]++;
		}
	}
	for(i = 0, max = 0; i < 6; i++){
		if(cnt[i] > max){
			max = cnt[i];
		}
	}
	for(i = 0; i < max; i++){
		for(j = 0; j < 6; j++){
			if(cnt[j] > 0){
				cout << c[j];
				cnt[j]--;
			}
		}
	}
	
	return 0;
}
