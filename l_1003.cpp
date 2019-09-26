#include <iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	while(n--){
		string s;
		cin>>s;
		
		int seat_p=0;
		int seat_t=0;
		int count_p=0;
		int count_t=0;
		int other=0;
		int length=s.length();
		
		for(int i=0;i<s.length();i++){
			if(s[i]=='P'){
				count_p++;
				seat_p=i;
			}else if(s[i]=='T'){
				count_t++;
				seat_t=i;
			}else if(s[i]!='A' && s[i]!='P' && s[i]!='T'){
				other++;
			}
		}
		
		if((count_p!=1)||(count_t!=1)||(other!=0)||(seat_t-seat_p<=1)){
			cout<<"NO"<<endl;
			continue;
		}
		
		if(seat_p*(seat_t-seat_p-1)==(s.length()-seat_t-1)){
			cout<<"YES"<<endl;
		}else{
			cout<<"NO"<<endl;
		}
	}
	
	return 0;
}
