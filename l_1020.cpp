#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
using namespace std;
class MoonCake{
	public:
		MoonCake(){
		}
		MoonCake(float s){
			store=s;
		}
		float store;
		float total;
		float price;
		void cake(){
			price=total/store;
		}
}; 
bool compare(MoonCake a, MoonCake b){
	return a.price>b.price;
}
int main(){
	int N,i,j;
	int store;
	float D;
	float total;
	float price;
	float sum=0.0;
	MoonCake t;
	cin>>N>>D;
	MoonCake v_store[N];
	for(i=0;i<N;i++){
		cin>>store;
		v_store[i]=MoonCake(store);
	}
	for(i=0;i<N;i++){
		cin>>total;
		v_store[i].total=total;
		v_store[i].price=total/(v_store[i].store);
	}
    for(i=0;i<N;i++){
    	for(j=0;j<N;j++){
    		if(v_store[i].price<v_store[j].price){
    			t=v_store[i];
    			v_store[i]=v_store[j];
    			v_store[j]=t;
			}
		}
	}
	for(i=0;i<N;i++){
		if(v_store[i].store<=D){
			sum=sum+v_store[i].total;
		}else{
			sum=sum+v_store[i].price*D;
			break;
		}
		D=D-v_store[i].store; 
	}
  cout <<fixed<<setprecision(2)<<sum<<endl;
}

