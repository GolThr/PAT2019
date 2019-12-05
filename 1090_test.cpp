#include <iostream>
#include <map>
#include <vector>
using namespace std;

class Items{
	public:
		Items(){
			p = 0;
		}
		Items(int b){
			item[0] = b;
			p = 1;
		}
		int item[10010];
		int p;
};

int main(){
	int n, m, i, j, l, q, k, a, b, t;
	int it[1010];
	bool flag;
	map<int, Items> itp;
	
	cin >> n >> m;
	for(i = 0; i < n; i++){
		cin >> a >> b;
		if(itp.find(a) != itp.end()){
			itp[a].item[itp[a].p++] = b;
		}else{
			itp.insert(pair<int, Items>(a, Items(b)));
		}
	}
	for(i = 0; i < m; i++){
		cin >> k;
		for(j = 0; j < k; j++){
			cin >> it[j];
		}
		for(j = 0; j < k; j++){
			flag = false;
			for(l = itp[it[j]].p - 1; l >= 0; l--){
				for(q = 0; q < k; q++){
					if(itp[it[j]].item[l] == it[q]){
						flag = true;
						break;
					}
				}
				if(flag){
					break;
				}
			}
			if(flag){
				break;
			}
		}
		if(flag){
			cout << "No" << endl;
		}else{
			cout << "Yes" << endl;
		}
	}
	
	return 0;
}
