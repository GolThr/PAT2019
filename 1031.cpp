#include <iostream>
using namespace std;

int main(){
	int i, n, z;
	int weight[17] = {7, 9, 10, 5, 8, 4, 2, 1, 6, 3, 7, 9, 10, 5, 8, 4, 2};
	char M[12] = {'1', '0', 'X', '9', '8', '7', '6', '5', '4', '3', '2'};
	bool hasWrong = false;
	string id;
	
	cin >> n;
	while(n--){
		cin >> id;
		for(i = 0, z = 0; id[i]; i++){
			z += (id[i] - '0') * weight[i];
		}
		if(id[17] != M[z % 11]){
			hasWrong = true;
			cout << id << endl;
		}
	}
	if(!hasWrong){
		cout << "All passed";
	}
	
	return 0;
} 
