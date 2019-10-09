#include <iostream>
#include <cmath>
using namespace std;

//��С��Լ��
long long gcd(long long a, long long b){
	long long t;
	while(b != 0){
		t = a % b;
		a = b;
		b = t;
	}
	return a;
} 

//���� 
long long simp(long long a, long long b){
	long long t = 0;
	a = abs(a);
	b = abs(b);
	while(a >= b){
		a -= b;
		t++;
	}
	return t;
}

void printFra(long long a, long long b){
	long long fz, fm, g, t = simp(a, b);
	bool flag = false;
	if(a * b < 0){
		flag = true;
		cout << "(-";
	}
	
	//���� 
	a = abs(a);
	b = abs(b);
	fz = a - t * b;
	fm = b;
	if(t != 0){
		cout << t;
	}
	
	//Լ��
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
	long long fz1, fm1, fz2, fm2, t, fz, fm;
	
	scanf("%lld/%lld %lld/%lld", &fz1, &fm1, &fz2, &fm2);
	
	//cout << fz1 << " " << fm1 << " " << fz2 << " " << fm2;
	
	//��
	fz = fz1 * fm2 + fz2 * fm1;
	fm = fm1 * fm2;
	printFra(fz1, fm1);
	cout << " + ";
	printFra(fz2, fm2);
	cout << " = ";
	printFra(fz, fm);
	cout << endl;
	
	//��
	fz = fz1 * fm2 - fz2 * fm1;
	fm = fm1 * fm2;
	printFra(fz1, fm1);
	cout << " - ";
	printFra(fz2, fm2);
	cout << " = ";
	printFra(fz, fm);
	cout << endl;
	
	//��
	fz = fz1 * fz2;
	fm = fm1 * fm2;
	printFra(fz1, fm1);
	cout << " * ";
	printFra(fz2, fm2);
	cout << " = ";
	printFra(fz, fm);
	cout << endl;
	
	//�� 
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
