#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class student {
	public:
		int id;
		int d_score;
		int c_score;
		int sum;
		student(int ID,int d,int c) {
			id=ID;
			d_score=d;
			c_score=c;
			sum=ID+d+c;
		}
		student() {
		}


};
bool compare(student a,student b) {
	if(a.sum>b.sum) {
         return true;
	}else if(a.sum==b.sum){
		if(a.d_score>b.d_score){
			return true;
		}else if(a.d_score==b.d_score){
			if(a.id<b.id){
				return true;
			}
		}
	}
	return false;
}
int main() {
	int id;
	int d_score;
	int c_score;
	int N,L,H;
	
	student stu=student(id,d_score,c_score);
	cin>>N>>L>>H;
	vector<student> v1,v2,v3,v4;
	int count=0;
	for(int i=0;i<N;i++){

		cin>>id>>d_score>>c_score;
		if(d_score>=L&&c_score>=L){
			count++;
			if(d_score>=H&&c_score>=H){
				v1.push_back(student(id,d_score,c_score));
			}else if(d_score>=H&&c_score<H){
				v2.push_back(student(id,d_score,c_score));
			}else if(d_score<H&&c_score<H&&d_score>=c_score){
				v3.push_back(student(id,d_score,c_score));
			}else{
				v4.push_back(student(id,d_score,c_score));
			}
		}
	}
    sort(v1.begin(),v1.end(),compare);
    sort(v2.begin(),v1.end(),compare);
    sort(v3.begin(),v1.end(),compare);
    sort(v4.begin(),v1.end(),compare);
    cout<<count<<endl;
    vector<student>::iterator itr;
    for(itr=v1.begin();itr!=v1.end();itr++){
    	cout<<itr->id<<" "<<itr->d_score<<" "<<itr->c_score<<endl;
	}
	for(itr=v2.begin();itr!=v2.end();itr++){
    	cout<<itr->id<<" "<<itr->d_score<<" "<<itr->c_score<<endl;
	}
	for(itr=v3.begin();itr!=v3.end();itr++){
    	cout<<itr->id<<" "<<itr->d_score<<" "<<itr->c_score<<endl;
	}
	for(itr=v4.begin();itr!=v4.end();itr++){
    	cout<<itr->id<<" "<<itr->d_score<<" "<<itr->c_score<<endl;
	}
  return 0; 
}
