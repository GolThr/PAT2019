#include <iostream>
#include <cmath>
using namespace std;

//最小公约数
int gcd(int a, int b){
	int t;
	while(b != 0){
		t = a % b;
		a = b;
		b = t;
	}
	return a;
} 

//化简 
int simp(int a, int b){
	int t = 0;
	a = abs(a);
	b = abs(b);
	while(a >= b){
		a -= b;
		t++;
	}
	return t;
}

void printFra(int a, int b){
	int fz, fm, g, t = simp(a, b);
	bool flag = false;
	if(a < 0 || b < 0){
		flag = true;
		cout << "(-";
	}
	
	//化简 
	a = abs(a);
	b = abs(b);
	fz = a - t * b;
	fm = b;
	if(t != 0){
		cout << t;
	}
	
	//约分
	if(fz != 0){
		g = gcd(fz, fm);
		if(t != 0){
			cout << " ";
		}
		if(g > 1){
			cout << fz / g << "/" << fm / g;
		}else{
			cout << fz << "/" << fm;
		}
	}
	if(t == 0 && fz == 0){
		cout << 0;
	}
	
	if(flag){
		cout << ")";
	}
}

int main(){
	int fz1, fm1, fz2, fm2, t, fz, fm;
	
	scanf("%d/%d %d/%d", &fz1, &fm1, &fz2, &fm2);
	
	//cout << fz1 << " " << fm1 << " " << fz2 << " " << fm2;
	
	//和
	fz = fz1 * fm2 + fz2 * fm1;
	fm = fm1 * fm2;
	printFra(fz1, fm1);
	cout << " + ";
	printFra(fz2, fm2);
	cout << " = ";
	printFra(fz, fm);
	cout << endl;
	
	//差
	fz = fz1 * fm2 - fz2 * fm1;
	fm = fm1 * fm2;
	printFra(fz1, fm1);
	cout << " - ";
	printFra(fz2, fm2);
	cout << " = ";
	printFra(fz, fm);
	cout << endl;
	
	//积
	fz = fz1 * fz2;
	fm = fm1 * fm2;
	printFra(fz1, fm1);
	cout << " * ";
	printFra(fz2, fm2);
	cout << " = ";
	printFra(fz, fm);
	cout << endl;
	
	//商 
	if(fz2 * fm2 != 0){
		fz = fz1 * fm2;
		fm = fz2 * fm1;
		printFra(fz1, fm1);
		cout << " / ";
		printFra(fz2, fm2);
		cout << " = ";
		printFra(fz, fm);
	}else{
		printFra(fz1, fm1);
		cout << " / ";
		printFra(fz2, fm2);
		cout << " = ";
		cout << "Inf";
	}
	
	
	 
	
	return 0;
} 
