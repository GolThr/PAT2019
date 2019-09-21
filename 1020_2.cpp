#include <iostream>
#include <vector>
#include <algorithm> 
#include <iomanip>
using namespace std;

class MoonCake{
	public:
		MoonCake(float s){
			store = s;
		}
		double store;
		double total_price;
		double price;
};

bool compare(MoonCake a, MoonCake b){
	return a.price > b.price;
}

int main(){
	int N, i;
	double D, store, total_price, total = 0;
	
	vector<MoonCake> v_store;
	cin >> N >> D;
	for(i = 0; i < N; i++){
		cin >> store;
		v_store.push_back(MoonCake(store));
	}
	vector<MoonCake>::iterator itr;
	for(itr = v_store.begin(); itr != v_store.end(); itr++){
		cin >> total_price;
		itr -> total_price = total_price;
		itr -> price = total_price / (itr -> store);
	}
	sort(v_store.begin(), v_store.end(), compare);
	
	for(itr = v_store.begin(); itr != v_store.end(); itr++){
		if(D != 0){
			if(itr -> store < D){
				total += itr -> total_price;
				D -= itr -> store;
			}else{
				total += (itr -> price) * D;
				D -= D;
			}
		}
	}
	cout << fixed << setprecision(2) << total;
	
	return 0;
} 
