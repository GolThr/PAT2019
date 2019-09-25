#include <iostream>

using namespace std;
int main(){
	int N;
	cin>>N;
	int year,month,day;
	int count=0;
	int i;
	string name[N];
	string maxname,minname;
	int max=20140907,min=18140905;
    int b;
	for(i=0;i<N;i++){
		cin>>name[i];
		scanf("%d/%d/%d",&year,&month,&day);
		b=year*10000+month*100+day;
		if(b<18140906||b>20140906){
		}else{
		    count++;
			if(b<max){
				name[i]=maxname;
				max=b;
			}
			if(b>min){
				name[i]=minname;
				min=b;
			}
		}
	}
			
	if(count!=0){
		cout<<count<<maxname<<minname;
	}else{
		cout<<0;
	}
return 0;	
} 


