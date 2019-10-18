#include <iostream>
using namespace std;

int main(){
	int cnt[26];
	int i, max;
	string str;
	char c;
	
	for(i = 0; i < 26; i++){
		cnt[i] = 0;
	}
	
	getline(cin, str);
	for(i = 0; str[i]; i++){
		c = str[i];
		if(c >= 'A' && c <= 'Z'){
			cnt[c - 'A']++;
		}else if(c >= 'a' && c <= 'z'){
			cnt[c - 'a']++;
		}
	}
	for(i = 0, max = 0; i < 26; i++){
		if(cnt[i] > cnt[max]){
			max = i;
		}
	}
	c = 'a' + max;
	cout << c << " " << cnt[max];
	
	return 0;
}
