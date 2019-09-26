#include <iostream>
using namespace std; 
int main(){
	int N;
	char a,b;
	cin>>N;
	int i;
	int countaC=0,countaB=0,countaJ=0;
	int countbC=0,countbB=0,countbJ=0;
	int count_as=0,count_p=0,count_af=0;
	for(i=0;i<N;i++){
	    cin>>a>>b;
		if(a=='C'){
			if(b=='C'){
				count_p++;
			}else if(b=='B'){
				count_af++;
				countbB++;
			}else if(b=='J'){
				count_as++;
				countaC++;
			}
		}
		if(a=='B'){
			if(b=='B'){
				count_p++;
			}else if(b=='C'){
				count_as++;
				countaB++;
			}else if(b=='J'){
				count_af++;
				countbJ++;
			}
		}
		if(a=='J'){
			if(b=='J'){
				count_p++;
			}else if(b=='B'){
				count_as++;
				countaJ++;
			}else if(b=='C'){
				count_af++;
				countbC++;
			}
		}
	}	
	cout<<count_as<<" "<<count_p<<" "<<count_af<<endl;
	cout<<count_af<<" "<<count_p<<" "<<count_as<<endl;
	char max='B';
	int maxN;
	if(countaB<countaC){
		max='C';
		maxN = countaC;
	}else{
		max = 'B';
		maxN = countaB;
	}
	if(maxN<countaJ){
		max='J';
	}
	cout<<max<<" ";
	if(countbB<countbC){
		max='C';
		if(countbC<countbJ){
			max='J';
		}else if(countbB<countbJ){
			max='J';
		}
	}
	cout<<max;	
	return 0;
}
