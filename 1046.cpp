#include <iostream>
using namespace std;

int main(){
	int n, a_han, a_hua, b_han, b_hua, sum, a_cnt = 0, b_cnt = 0;
	
	cin >> n;
	while(n--){
		cin >> a_han >> a_hua >> b_han >> b_hua;
		sum = a_han + b_han;
		if(sum == a_hua && sum != b_hua){
			b_cnt++;
		}else if(sum != a_hua && sum == b_hua){
			a_cnt++;
		}
	}
	cout << a_cnt << " " << b_cnt;
	
	return 0;
}
