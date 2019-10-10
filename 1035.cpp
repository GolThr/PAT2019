#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	int n, i, index, k = 1;
	bool isInsert = true, isSame = false;
	cin >> n;
	vector<int> origin(n), target(n);
	
	for(i = 0; i < n; i++){
		cin >> origin[i];
	}
	for(i = 0; i < n; i++){
		cin >> target[i];
	}
	
	for(i = 1; i < n; i++){
		if(target[i] < target[i - 1]){
			index = i;
			break;
		}
	}
	for(; i < n; i++){
		if(target[i] != origin[i]){
			isInsert = false;
			break;
		}
	}
	if(isInsert){
		//Insertion Sort
		cout << "Insertion Sort" << endl;
		sort(target.begin(), target.begin() + index + 1);
		cout << target[0];
		for(i = 1; i < n; i++){
			cout << " " << target[i];
		} 
	}else{
		cout << "Merge Sort" << endl;
		while(!isSame){
			k *= 2;
			if(equal(target.begin(), target.end(), origin.begin())){
				isSame = true;
			}
			for(i = 0; i < n / k; i++){
				sort(origin.begin() + i * k, origin.begin() + (i + 1) * k);
			}
			sort(origin.begin() + k * (n / k), origin.end());
		}
		cout << origin[0];
		for(i = 1; i < n; i++){
			cout << " " << origin[i];
		}
	}
	
	return 0;
} 
