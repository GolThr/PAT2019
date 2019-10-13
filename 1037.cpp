#include <iostream>
using namespace std;

int main(){
	int g, s, k, p = 0, a = 0, n;	//1g = 17s, 1s = 29k
	
	scanf("%d.%d.%d", &g, &s, &k);
	p = g * 17 * 29 + s * 29 + k;
	scanf("%d.%d.%d", &g, &s, &k);
	a = g * 17 * 29 + s * 29 + k;
	
	n = a - p;
	g = n / (17 * 29);
	if(g < 0){
		n = -n;
	}
	n = n % (17 * 29);
	s = n / 29;
	k = n % 29;
	
	cout << g << "." << s << "." << k;
 	
	return 0;
} 
