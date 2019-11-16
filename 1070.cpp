#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main(){
	int n, i;
	double len;
	cin >> n;
	double rope[n];
	
	for(i = 0; i < n; i++){
		cin >> rope[i];
	}
	sort(rope, rope + n);
	for(i = 1, len = rope[0]; i < n; i++){
		len += rope[i];
		len /= 2;
	}
	cout << floor(len);
	
	return 0;
}
