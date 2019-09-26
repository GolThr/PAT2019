#include <iostream>
using namespace std;

int main(){
	int t, i, n, win_a = 0, draw_a = 0, lost_a = 0, win_b = 0, draw_b = 0, lost_b = 0;
	//各手势胜率记录，0：B，1：C，2：J 
	int A_win[3] = {0, 0, 0};
	int B_win[3] = {0, 0, 0};
	char a, b;
	
	cin >> n;
	for(i = 0; i < n; i++){
		cin >> a >> b;
		//判断甲方胜况：0败，1平，2胜 
		if(a == b){
			draw_a++;
			draw_b++;
		}else if(a == 'B' && b == 'J'){
			lost_a++;
			win_b++;
			B_win[2]++;
		}else if(a == 'J' && b == 'B'){
			win_a++;
			lost_b++;
			A_win[2]++;
		}else{
			if(a < b){
				if(a == 'B'){
					A_win[0]++;
				}else if(a == 'C'){
					A_win[1]++;
				}else{
					A_win[2]++;
				}
				win_a++;
				lost_b++;
			}else{
				if(b == 'B'){
					B_win[0]++;
				}else if(b == 'C'){
					B_win[1]++;
				}else{
					B_win[2]++;
				}
				lost_a++;
				win_b++;
			}
		}
	}
	cout << win_a << " " << draw_a << " " << lost_a << endl;
	cout << win_b << " " << draw_b << " " << lost_b << endl;
	for(i = 1, t = 0; i < 3; i++){
		if(A_win[i] > A_win[t]){
			t = i;
		}
	}
	if(t == 0){
		cout << "B" << " ";
	}
	else if(t == 1){
		cout << "C" << " ";
	}else{
		cout << "J" << " ";
	}
	for(i = 1, t = 0; i < 3; i++){
		if(B_win[i] > B_win[t]){
			t = i;
		}
	}
	if(t == 0){
		cout << "B";
	}
	else if(t == 1){
		cout << "C";
	}else{
		cout << "J";
	}
	
	return 0;
} 
