#include <iostream>
using namespace std;
#include <cmath> 
int main(){
	int N;
	cin>>N;
	int count=0;
	int t[100000];
	int x=0;
	int i,j;
	for(i=2;i<=N;i++){
		int harf = sqrt(i);
		for(j=2;j<=harf;j++){
			if(i%j==0){
			    break;	
			}
			 
		}
		cout << j << endl;
	    if(j==harf+1){
			t[x++]=i;
	    }
	}
	cout << x << endl;
	for(int i=0;i<x-1;i++){
		if(t[i+1]-t[i]==2){
			count++;
		}
			
	}	
	cout<<count;
	return 0;
}
