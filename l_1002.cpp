#include<iostream>
using namespace std;
int main(){
	string n;
	int sum=0;
	int a[4];
	int i=0;
	getline(cin,n);
	for(i=0;n[i];i++){
		sum+=n[i]-'0';
	}
    for(i=0;sum!=0;i++){
    	a[i]=sum%10;
    	sum=sum/10;
    	
}
	for(i--;i>0;i--){
		switch(a[i]){
			case 0:
				cout<<"ling"<<" ";
			break;
			case 1:
				cout<<"yi"<<" ";
			break;
			case 2:
				cout<<"er"<<" ";
			break;
			case 3:
				cout<<"san"<<" ";
			break;
			case 4:
				cout<<"si"<<" ";
			break;
			case 5:
				cout<<"wu"<<" ";
			break;
			case 6:
				cout<<"liu"<<" ";
			break;
			case 7:
			     cout<<"qi"<<" "; 
			break;
			case 8:
				cout<<"ba"<<" ";
			break;
			case 9:
				cout<<"jiu"<<" ";
			break;
		}
	}
	switch(a[i]){
		case 0:{
			cout<<"ling"
			break;
		}
		case 1:{
			cout<<"yi"
			break;
		}
		case 2:
			cout<<"er";
		break;
		case 3:
			cout<<"san";
		break;
		case 4:
			cout<<"si";
		break;
		case 5:
			cout<<"wu";
		break;
		case 6:
			cout<<"liu";
		break;
		case 7:
		     cout<<"qi"; 
		break;
		case 8:
			cout<<"ba";
		break;
		case 9:
			cout<<"jiu";
		break;
	}
}
