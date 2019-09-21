#include <iostream>
#include <vector>
#include <algorithm> 
#include <iomanip>
using namespace std;

class MoonCake{
	public:
		MoonCake(){}
		MoonCake(float s){
			store = s;
		}
		double store;
		double total_price;
		double price;
};

int main(){
	int N, i, j;
	double D, store, total_price, total = 0;
	MoonCake mc;
	
	cin >> N >> D;
	MoonCake v_store[N];
	
	for(i = 0; i < N; i++){
		cin >> store;
		v_store[i] = MoonCake(store);
	}
	for(i = 0; i < N; i++){
		cin >> total_price;
		v_store[i].total_price = total_price;
		v_store[i].price = total_price / (v_store[i].store);
	}
	
	for(i = 0; i < N; i++){
		for(j = 1; j < N - i; j++){
			if(v_store[j].price > v_store[j - 1].price){
				mc = v_store[j];
				v_store[j] = v_store[j - 1];
				v_store[j - 1] = mc;
			}
		}
	}
	
	for(i = 0; i < N; i++){
		if(D != 0){
			if(v_store[i].store < D){
				total += v_store[i].total_price;
				D -= v_store[i].store;
			}else{
				total += (v_store[i].price) * D;
				D -= D;
			}
		}
	}
	cout << fixed << setprecision(2) << total;
	
	return 0;
} 
