#include <iostream>
using namespace std;

int main(){
	string str;
	int i, cnt_0 = 0, cnt_1 = 0, sum = 0;
	
	getline(cin, str);
	for(i = 0; str[i]; i++){
		if(str[i] >= 'A' && str[i] <= 'Z'){
			sum += str[i] - 'A' + 1;
		}else if(str[i] >= 'a' && str[i] <= 'z'){
			sum += str[i] - 'a' + 1;
		}
	}
	while(sum != 0){
		if(sum % 2 == 0){
			cnt_0++;
		}else{
			cnt_1++;
		}
		sum /= 2;
	}
	cout << cnt_0 << " " << cnt_1;
	
	
	return 0;
}
