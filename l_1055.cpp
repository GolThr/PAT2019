#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
struct student {
	string name;
	int height;
};
bool compare(struct student a,struct student b) {
	if(a.height!=b.height) {
		return a.height>b.height;
	} else {
		return a.name<b.name;
	}
}
int main() {
	int n,k;
	scanf("%d %d", &n, &k);
	vector<struct student> v(n);
	for(int i=0; i<n; ++i) {
		cin>>v[i].name>>v[i].height;
	}
	sort(v.begin(),v.end(),compare);
	int col= n / k;
	int final= n / k + (n % k);
	string result="";
	for(int i=0; i<n;) {
		if(i==0) {
			result=v[i].name;
			++i;
			for(int j=1; j<final; ++j,++i) {
				if(j % 2==1) {
					result=v[i].name+" "+result;
				} else {
					result=result+" "+v[i].name;
				}
			}
			cout<<result<<endl;
		} else {
			result=v[i].name;
			++i;
			for(int j=1; j<col; ++j,++i) {
				if(j%2==1) {
					result=v[i].name+" "+result;
				} else {
					result=result+" "+v[i].name;
				}
			}
			cout<<result<<endl;
		}
	}
	return 0;
}

