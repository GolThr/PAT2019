#include<iostream>
using namespace std;

int main()
{
	int N;
	cin>>N;
	
		while(1){
			int a[4]={0, 0, 0, 0};
			int k,t;
			k=N;
			int i=0,j=0;
			while(k!=0){
				a[i]=k%10;
				i++;
				k/=10;
			}
			if(a[0]==a[1]&&a[2]==a[3]&&a[1]==a[2]){
			    cout<<N<<" - "<<N<<" = "<<"0000";
				break;
			}
			for(i=0;i<4;i++){
				for(j=0;j<4;j++){
					if(a[i]<a[j]){
					 t=a[i];
					 a[i]=a[j];
					 a[j]=t;
					}
				}
			}
			int c,d;
			c=a[0]*1000+a[1]*100+a[2]*10+a[3];
			d=a[3]*1000+a[2]*100+a[1]*10+a[0];
			cout<<d<<" - "<<c<<" = "<<d-c;
			N=d-c;
			if(N==6174){
				break;
			}else{
				cout<<endl;
			}
		}
	return 0;
}

