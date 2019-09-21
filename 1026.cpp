#include <iostream>
#include <cmath>
using namespace std;

int main(){
	double CLK_TCK = 100;
	double c1, c2; 
	int seconds, hours = 0, minutes = 0;
	int i, j;
	
	cin >> c1 >> c2;
	seconds = round((c2 - c1) / CLK_TCK);
	
	while(seconds >= 60){
		seconds -= 60;
		minutes++;
	}
	while(minutes >= 60){
		minutes -= 60;
		hours++;
	}
	
	if(hours / 10 == 0){
		cout << 0;
	}
	cout << hours << ":";
	if(minutes / 10 == 0){
		cout << 0;
	}
	cout << minutes << ":";
	if(seconds / 10 == 0){
		cout << 0;
	}
	cout << seconds;
	
	return 0;
}
