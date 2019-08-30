#include<iostream>
using namespace std;
struct Student{
	string name;
	string ID;
	int score;
};
int main(){
	int n=0;
	cin>>n;
	Student max, min;
	max.score=-1;
	min.score=101;
	
	int score;
	string name, id;
	
	for(int i=0;i<n;i++){
		cin>>name>>id>>score;
		if(score>max.score){
			max.name = name;
			max.ID = id;
			max.score = score;
		}
		if(score<min.score){
			min.name = name;
			min.ID = id;
			min.score = score;
		}
	}
	
	cout<<max.name<<" "<<max.ID<<endl;
	cout<<min.name<<" "<<min.ID;
	
	return 0; 
}
