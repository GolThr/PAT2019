#include <iostream>
using namespace std;

struct Problem{
	int value;
	int num_op;
	int num_crt_op;
	char crt_op[6];
};

int main(){
	int n, m, i, j, k, p, ans_num, max;
	cin >> n >> m;
	Problem problem[m];
	int cnt_err[m];
	int stu[n];
	char c;
	bool isCrt = true;
	
	for(i = 0; i < m; i++){
		cnt_err[i] = 0;
	}
	for(i = 0; i < n; i++){
		stu[i] = 0;
	}
	
	for(i = 0; i < m; i++){
		cin >> problem[i].value >> problem[i].num_op >> problem[i].num_crt_op;
		for(j = 0; j < problem[i].num_crt_op; j++){
			cin >> problem[i].crt_op[j];
		}
		problem[i].crt_op[j] = '\0';
	}
	
	for(i = 0; i < n; i++){
		//cout << "n" << endl;
		for(j = 0; j < m; j++){
			isCrt = true;
			while(true){
				cin >> c;
				//cout << "c " << c << endl;
				if(c == '('){
					cin >> ans_num;
					//cout << "m " << ans_num << endl;
					if(ans_num != problem[j].num_crt_op){
						isCrt = false;
						cnt_err[j]++;
					}else{
						for(k = 0; k < ans_num; k++){
							cin >> c;
							//cout << "mc " << c << endl;
							for(p = 0; p < problem[j].num_crt_op; p++){
								if(c == problem[j].crt_op[p]){
									break;
								}
							}
							if(p >= problem[j].num_crt_op){
								isCrt = false;
								break;
							}
						}
						if(isCrt){
							stu[i] += problem[j].value;
						}else{
							cnt_err[j]++;
						}
					}
				}else if(c == ')'){
					break;
				}
			}
		}
	}
	
	for(i = 0; i < n; i++){
		cout << stu[i] << endl;
	}
	for(i = 0, max = 0; i < m; i++){
		if(cnt_err[i] > max){
			max = cnt_err[i];
		}
	}
	if(max != 0){
		cout << max;
		for(i = 0; i < m; i++){
			if(cnt_err[i] == max){
				cout << " " << i + 1;
			}
		}
	}else{
		cout << "Too simple";
	}
	
	return 0;
} 
