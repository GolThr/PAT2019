#include <iostream>
#include <cmath>
using namespace std;
int main(){
	double C1,C2;
	cin>>C1>>C2;
	int hh=0,mm=0,ss=0;
	double CLK_TCK=100;
    if(C2>C1){
		int t=round((C2-C1)/CLK_TCK);
		hh=t/3600;
		mm=(t-hh*3600)/60;
		ss=(t-(hh*3600))-(mm*60);
		printf("%02d:%02d:%02d",hh,mm,ss);
	} 

	return 0;
}

