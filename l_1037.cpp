#include<iostream>
using namespace std;
int main() {
	int g1,g2,s1,s2,k1,k2;
	int a,b,c;
	scanf("%d.%d.%d",&g1,&s1,&k1);
	scanf("%d.%d.%d",&g2,&s2,&k2);
	a=g1*17*29+s1*29+k1;
	b=g2*17*29+s2*29+k2;
	c=b-a;
	if(c<0) {
		cout<<"-";
		c=-c;
	}
	cout<<c/(17*29)<<"."<<c/29%17<<"."<<c%29;
	return 0;
}

