/*****************************
*注意：
 1. 计算结果为0的情况，0结果为0的判断 
 2. 当p=-0.004应该输出0.00，而不是-0.00
*参考：
 1. [CSDN] PAT-B1051
	https://blog.csdn.net/qq_2918/article/details/79938167
*****************************/ 

#include <iostream>
#include <cmath>
using namespace std;

int main(){
	double r1, p1, r2, p2, s1, x1, s2, x2, s3, x3;
	bool flag = false;
	
	cin >> r1 >> p1 >> r2 >> p2;
	s1 = r1 * cos(p1);
	x1 = r1 * sin(p1);
	s2 = r2 * cos(p2);
	x2 = r2 * sin(p2);
	s3 = s1 * s2 - x1 * x2;
	x3 = x1 * s2 + s1 * x2;
	if(abs(s3) < 0.005){
		printf("0.00");
		flag = true;
	}else{
		printf("%.2f", s3);
	}
	if(x3 > 0){
		printf("+%.2fi", x3);
	}else if(abs(x3) < 0.005){
		if(flag == 0){
			printf("+0.00i");
		}
	}else{
		printf("%.2fi", x3);
	}
	
	return 0;
} 
