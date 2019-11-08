/*****************************
*注意：
 1. cin会超时，改成scanf 
*****************************/ 

#include <iostream>
using namespace std;

int main(){
	int m, n, a, b, gray, i, j, value;
	
	//cin >> m >> n >> a >> b >> gray;
	scanf("%d%d%d%d%d", &m, &n, &a, &b, &gray);
	for(i = 0; i < m; i++){
		for(j = 0; j < n; j++){
			scanf("%d", &value);
			if(value >= a && value <= b){
				value = gray;
			}
			if(j != 0){
				printf(" ");
			}
			printf("%03d", value);
		}
		printf("\n");
	}
	
	return 0;
}
