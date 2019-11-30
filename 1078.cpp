#include <iostream>
using namespace std;

int main(){
	int i, j, cnt, len;
	string c, str;
	
	getline(cin, c);
	getline(cin, str);
	
	if(c == "C"){
		for(i = 1, cnt = 1; str[i]; i++){
			if(str[i] == str[i - 1]){
				cnt++;
			}else{
				if(cnt != 1){
					cout << cnt << str[i - 1];
				}else{
					cout << str[i - 1];
				}
				cnt = 1;
			}
		}
		if(cnt != 1){
			cout << cnt << str[i - 1];
		}else{
			cout << str[i - 1];
		}
		cnt = 1;
	}else if(c == "D"){
		len = str.length();
		for(i = 0; i < len; i++){
			cnt = 1;
			if(str[i] >= '0' && str[i] <= '9'){
				cnt = str[i] - '0';
				for(i++; str[i] >= '0' && str[i] <= '9'; i++){
					cnt = 10 * cnt + (str[i] - '0');
				}
			}
			//cout << cnt << endl;
			if(cnt != 1){
				for(j = 0; j < cnt; j++){
					cout << str[i];
				}
			}else{
				cout << str[i];
			}
		}
	}
	
	return 0;
}
