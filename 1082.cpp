#include <iostream>
using namespace std;

int main(){
	int n, i, id, max = 0, min = 10010, max_i, min_i;
	float x, y, s;
	
	cin >> n;
	for(i = 0; i < n; i++){
		cin >> id >> x >> y;
		s = x * x + y * y;
		if(s > max){
			max = s;
			max_i = id;
		}
		if(s < min){
			min = s;
			min_i = id;
		}
	}
	printf("%04d %04d", min_i, max_i);
	
	return 0;
}
