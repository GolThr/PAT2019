#include <iostream>
using namespace std;

int main(){
	int n, m, i, j, ans;
	cin >> n >> m;
	int score[m], cor_ans[m], stu[n] = {0};
	
	for(i = 0; i < m; i++){
		cin >> score[i];
	}
	for(i = 0; i < m; i++){
		cin >> cor_ans[i];
	}
	for(i = 0; i < n; i++){
		for(j = 0; j < m; j++){
			cin >> ans;
			if(ans == cor_ans[j]){
				stu[i] += score[j];
			}
		}
	}
	for(i = 0; i < n; i++){
		cout << stu[i] << endl;
	}
	
	return 0;
} 
