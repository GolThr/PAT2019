#include <iostream>
using namespace std;

struct Team{
	int id;
	int sum = 0;
};

int main(){
	int i, j, n, id, per_id, s, max = 0, p = 0;
	cin >> n;
	Team team[n];
	
	for(i = 0; i < n; i++){
		scanf("%d-%d %d", &id, &per_id, &s);
		for(j = 0; j < p; j++){
			if(team[j].id == id){
				team[j].sum += s;
				break;
			}
		}
		if(j >= p){
			team[p].id = id;
			team[p].sum += s;
			p++;
		}
	}
	for(i = 0; i < p; i++){
		if(team[i].sum > team[max].sum){
			max = i;
		}
	}
	cout << team[max].id << " " << team[max].sum;
	
	return 0;
}
