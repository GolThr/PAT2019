#include <iostream>
using namespace std;
int main(){
	int a,b;
	int c=1;
	while(cin>>a>>b){
		if(b==0){
			break;
		}
		if(!c){
			cout<<" ";
		}else{
			c=0;
		}
		cout<<a*b<<" "<<b-1;
	}
	if(c){
		cout<<"0 0";
	}
	return 0;
} 

