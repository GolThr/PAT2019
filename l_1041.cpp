#include<iostream>
using namespace std;
class student{
	public:
		string no;
		int sjh;
		int ksh;
		student(string n,int s,int k){
			no=n;
			sjh=s;
			ksh=k;
		}
		student(){};
};
int main(){
	int N,M;
	int i,j;
	cin>>N;
    student stu[N];
	for(i=0;i<N;i++){
		cin>>stu[i].no>>stu[i].sjh>>stu[i].ksh;
	}
	cin>>M;
	for(j=0;j<M;j++){
		int c=0;
		cin>>c;
		for(i=0;i<N;i++){
			if(stu[i].sjh==c){
				cout<<stu[i].no<<" "<<stu[i].ksh<<endl;
			    break;
			}
		}
	}
	return 0;
}

