#include<iostream>
using namespace std;
int main() {
	int N,i;
	int jh,jq,yh,yq;
	cin>>N;
	int t=0,count_j=0,count_y=0;
	for(i=0; i<N; i++) {
		cin>>jh>>jq>>yh>>yq;
		t=jh+yh;
		if(jq==t) {
			count_y++;
		} else if(yq==t) {
			count_j++;
		} else{

		}
	}
	cout<<count_j<<" "<<count_y;
	return 0;

}

