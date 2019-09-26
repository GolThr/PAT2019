#include <iostream>
using namespace std;
int main(){
	string n;
	int i,j;
	getline(cin,n);
	int length=n.length();
   for(i=length-1;i>=0;i--){
       if(n[i]==' '){
       	for(j=i+1;j<=length-1;j++){
       		cout<<n[j];
       		
		   }
		   cout<<" ";
		   length=i;
	   }
   }
   for(i=0;i<length;i++){
   	cout<<n[i];
   }
	return 0;
}
