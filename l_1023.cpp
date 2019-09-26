#include <iostream>

using namespace std;
int main() {
	int a[10];
	int i,j,t,s;
	for(i=0; i<10; i++) {
		cin>>a[i];
	}
    for(i=1;i<10;i++){
    	if(a[i]>0){
    		cout<<i;
    		a[i]--;
    		break;
		}
	}
	for(i=0;i<10;i++){
		while(a[i]--){
			cout<<i;
		}
	}
	return 0;
}

