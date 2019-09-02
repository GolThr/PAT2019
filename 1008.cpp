#include <iostream>
using namespace std;

int main(){
	int i, n, m;
	cin >> n >> m;
	int arr[n];
	
	for(i = 0; i < n; i++){
		cin >> arr[(i + m) % n];
	}
	for(i = 0; i < n - 1; i++){
		cout << arr[i] << " ";
	}
	cout << arr[n - 1];
	
	return 0;
}
