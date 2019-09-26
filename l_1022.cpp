#include <iostream>

using namespace std;
int main() {
	int A,B;
	int D,i,j;
	int a[100];
	cin>>A>>B>>D;
	int sum;
	sum=A+B;
	if(sum==0) {
		cout<<0;
	}
	for(i=0; sum!=0; i++) {
		a[i]=sum%D;
		sum=sum/D;
	}
	for(j=i-1; j>=0; j--) {
		cout<<a[j];
	}
	return 0;
}

