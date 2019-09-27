#include<iostream>
using namespace std;
int main() {
	int N;
	cin>>N;
	int q[17]= {7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
	int i,j,sum;
	int count=0;
	char t;
	string id;
	int flag=true;
	for(i=0; i<N; i++) {
		cin>>id;
		sum=0;
		for(j=0; j<17; j++) {
			sum+=(id[j]-'0')*q[j];
		}
		switch(sum%11) {
			case 0: {
				t='1';
				break;
			}
			case 1: {
				t='0';
				break;
			}
			case 2: {
				t='X';
				break;
			}
			case 3: {
				t='9';
				break;
			}
			case 4: {
				t='8';
				break;
			}
			case 5: {
				t='7';
				break;
			}
			case 6: {
				t='6';
				break;
			}
			case 7: {
				t='5';
				break;
			}
			case 8: {
				t='4';
				break;
			}
			case 9: {
				t='3';
				break;
			}
			case 10: {
				t='2';
				break;
			}
		}
		if(id[17]!=t) {
			count++;
			cout<<id<<endl;
			flag=false;
		}
	}
	if(flag) {
		cout<<"All passed";
	}
	return 0;
}

