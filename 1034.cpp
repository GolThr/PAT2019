#include <iostream>
#include <stdio.h>
#include <cmath>
#include <algorithm>
using namespace std;

//最小公约数
long long gcd(long long a, long long b){
	long long t;
	while(b != 0){
		t = a % b;
		a = b;
		b = t;
	}
	return a;
}

void printFra(long long fz, long long fm){
    if(fz == 0){
        cout << "0" ;
        return;
    }
    if(fm < 0){
        fm*=-1;
        fz*=-1;
    }
    bool flag = false;
    if(fz < 0){
        flag = true;
        cout <<"(-";
        fz *= -1;
    }
    bool xx = false;
    if(fz/fm != 0){
        cout << fz/fm ;
        xx = true;
    }
    fz%=fm;
    if(fz != 0){
        if(xx){
            cout << " ";
        }
        cout << fz/__gcd(fz,fm) << "/" << fm/__gcd(fz,fm);
    }

    if(flag){
        cout <<")";
    }
}



/*void printFra(long long a, long long b){
	long long fz, fm, g, t = a/b;
	bool flag = false;
	if(a * b < 0){
		flag = true;
		cout << "(";
	}
	//化简
	if(t != 0){
		cout << t;
	}else if(a * b < 0){
		cout << "-";
	}
	a = abs(a);
	b = abs(b);
	fz = a % b;
	fm = b;

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
*/
int main(){
	long long fz1, fm1, fz2, fm2, t, fz, fm;

	while(~scanf("%lld/%lld %lld/%lld", &fz1, &fm1, &fz2, &fm2)){

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
	cout <<endl;
	}

	return 0;
}

