#include <iostream>
using namespace std;
int main(){
	string str1,str2,str3,str4;
	int i=0;
	getline(cin,str1);
	getline(cin,str2);
	getline(cin,str3);
	getline(cin,str4);
	int len1=str1.length();
	int len2=str2.length();
	int len3=str3.length();
	int len4=str4.length();
	int t=0;
	for(i=0;i<len1&&i<len2;i++){
		if(str1[i]==str2[i]&&(str1[i]>='A'&&str1[i]<='G')){
		  switch(str1[i]){
		  	case 'A':{
			    cout<<"MON"<<" ";
				break;
			  }
			case 'B':{
				cout<<"TUE"<<" ";
				break;
			}
			case 'C':{
				cout<<"WED"<<" ";
				break;
			}
			case 'D':{
				cout<<"THU"<<" ";
				break;
			}
			case 'E':{
				cout<<"FRI"<<" ";
				break;
			}
			case 'F':{
				cout<<"SAT"<<" ";
				break;
			}
			case 'G':{
				cout<<"SUN"<<" ";
				break;
			}
		  }
		  t=i;
		  break;
		}
	}
	for(i=t+1;i<len1&&i<len2;i++){
		if((str1[i]==str2[i])&&((str1[i]>='A'&&str1[i]<='N')||(str1[i]>='0'&&str1[i]<='9'))){
			if(str1[i]>='A'&&str1[i]<='N'){
				int x=str1[i]-'A'+10;
				cout<<x<<":";
            }else{
            	cout<<"0"<<str1[i]<<":";
			}
			break;
		}
	}
	for(i=0;i<len3&&i<len4;i++){
		if(str3[i]==str4[i]&&(str3[i]>='A'&&str3[i]<='Z'||str3[i]>='a'&&str3[i]<='z')){
			if(i < 10){
				cout << "0" << i;
			}else{
				cout << i;
			}
		}
	}
	return 0;
}
