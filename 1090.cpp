#include <iostream>
#include <map>
#include <vector>
using namespace std;

class Items{
	public:
		Items(){}
		Items(int b){
			item.push_back(b);
		}
		vector<int> item;
};

int main(){
	int n, m, i, j, l, q, k, a, b, t;
	int it[1010];
	bool flag;
	map<int, Items> itp;
	vector<int>::iterator itr;
	
	cin >> n >> m;
	for(i = 0; i < n; i++){
		cin >> a >> b;
		if(itp.find(a) != itp.end()){
			itp[a].item.push_back(b);
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
			for(itr = itp[it[j]].item.begin(); itr != itp[it[j]].item.end(); itr++){
				for(q = 0; q < k; q++){
					if(*itr == it[q]){
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
