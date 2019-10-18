#include <iostream>
using namespace std;
int main() {
	string n;
	getline(cin,n);
	int s[6];
	int i,j;
	for(i=0;i<6;i++){
		s[i]=0;
	}
	for(i=0; i<n.length(); i++) {
		switch(n[i]) {
			case 'P': {
				s[0]++;
				break;
			}
			case 'A': {
				s[1]++;
				break;
			}
			case 'T': {
				s[2]++;
				break;
			}
			case 'e': {
				s[3]++;
				break;
			}
			case 's': {
				s[4]++;
				break;
			}
			case 't': {
				s[5]++;
				break;
			}
		}
	}
	for(i=0; i<7; i++) {
		if(s[0]) {
			cout<<'P';
			--s[0];
		}
		if(s[1]) {
			cout<<'A';
			--s[1];
		}
		if(s[2]) {
			cout<<'T';
			--s[2];
		}
		if(s[3]) {
			cout<<'e';
			--s[3];
		}
		if(s[4]) {
			cout<<'s';
			--s[4];
		}
		if(s[5]) {
			cout<<'t';
			--s[5];
		}
	}
	return 0;
}

