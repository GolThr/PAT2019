#include <iostream>
using namespace std;

struct Problem{
	float score;
	int op_n;
	int cor_op_n;
	string cor_op = "-----";
};

struct CntWroPro{
	int cnt[5] = {0};
};

int main(){
	int n, m, ans_n, i, j, l, k, p, max;
	float sum;
	cin >> n >> m;
	Problem pro[m];
	CntWroPro cnt_wr_pro[m];
	int cnt_wr[m];
	char c;
	string op_str;
	bool hasWrongAns = false;
	
	for(i = 0; i < m; i++){
		cin >> pro[i].score >> pro[i].op_n >> pro[i].cor_op_n;
		for(j = 0; j < pro[i].cor_op_n; j++){
			cin >> pro[i].cor_op[j];
		}
	}
	
//	for(i = 0; i < m; i++){
//		cout << pro[i].score << pro[i].op_n << pro[i].cor_op_n << pro[i].cor_op << endl;
//	}

	for(i = 0; i < n; i++){
		for(j = 0, sum = 0, p = -1; j < m; ){
			cin >> c;
			if(c == '('){
				cin >> ans_n;
				p++;
				op_str = pro[p].cor_op;
				for(l = 0, hasWrongAns = false; l < ans_n; l++){
					cin >> c;
					for(k = 0; k < pro[p].cor_op_n; k++){
						if(c == op_str[k]){
							op_str[k] = '-';
							break;
						}
					}
					if(k >= pro[p].cor_op_n){
						//有错误答案
						cnt_wr_pro[p].cnt[c - 'a']++;
						hasWrongAns = true; 
					}
				}
				if(!hasWrongAns){
					//都是正确答案 
					if(ans_n == pro[p].cor_op_n){
						//没有漏选
						sum += pro[p].score;
					}else{
						//漏选
						sum += (pro[p].score / 2);
					}
				}
				for(k = 0; op_str[k]; k++){
					if(op_str[k] != '-'){
						cnt_wr_pro[p].cnt[op_str[k] - 'a']++;
					}
				}
				j++; 
			}
		}
		printf("%.1f\n", sum);
	}
	for(i = 0, max = 0; i < m; i++){
		for(j = 0; j < 5; j++){
			//cout << cnt_wr_pro[i].cnt[j] << " ";
			if(cnt_wr_pro[i].cnt[j] > max){
				max = cnt_wr_pro[i].cnt[j];
			}
		}
		//cout << endl;
	}
	//cout << max << endl;
	if(max != 0){
		for(i = 0; i < m; i++){
			for(j = 0; j < 5; j++){
				if(cnt_wr_pro[i].cnt[j] == max){
					cout << max << " " << i + 1 << "-" << (char)('a' + j) << endl;
				}
			}
		}
	}else{
		cout << "Too simple";
	}
	
	return 0;
} 
