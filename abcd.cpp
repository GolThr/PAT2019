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
	int max=-1,min=2015*13000+13*100+32;
    int b;
    int up=2014*13000+9*100+6, down = 1814*13000+9*100+6;
	
	for(i=0;i<N;i++){
		cin>>name[i];
		scanf("%d/%d/%d",&year,&month,&day);
		b=year*13000+month*100+day;
		if(b<=up && b>=down){
		    count++;
			if(b>max){
				maxname=name[i];
				max=b;
			}
			if(b<min){
				minname=name[i];
				min=b;
			}
		}
	}
			
	if(count!=0){
		cout<<count<< " " <<minname<<" "<<maxname;
	}else{
		cout<<0;
	}
return 0;	
} 


