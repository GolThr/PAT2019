#include <iostream>
#include <cmath>
using namespace std;

int main(){
	string a, b;
	int i, j, t, lena, lenb, na, nb, r;
	
	cin >> a >> b;
	lena = a.length();
	lenb = b.length();
	t = abs(lena - lenb);
	
	if(lena > lenb){
		i = 0;
		j = -t;
	}else if(lena < lenb){
		i = -t;
		j = 0;
	}else{
		i = j = 0;
	}
	
	for(; i < lena || j < lenb; i++, j++){
		if(i < 0){
			na = 0;
		}else{
			na = a[i] - '0';
		}
		if(j < 0){
			nb = 0;
		}else{
			nb = b[j] - '0';
		}
//		cout << na << " " << nb << endl;
		if((abs(i) + 1) % 2 == 0){
			r = nb - na;
			if(r < 0){
				r += 10;
			}
			cout << r;
		}else{
			r = (na + nb) % 13;
			if(r == 10){
				cout << "J";
			}else if(r == 11){
				cout << "Q";
			}else if(r == 12){
				cout << "K";
			}else{
				cout << r;
			}
		}
	}
	
	return 0;
}
