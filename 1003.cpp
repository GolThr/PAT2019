/*****************************
*注意：
 1. cin>>n后用getline(cin,str);会因为读到上一行的回车而出错，可考虑换成cin读取字符串 
 2. 题中第三个条件用来找规律
 3. 字符串str.find(char)函数用来找到str中从头开始第一个char出现的下标（从0记）
 4. 字符串str.length()得到字符串长度（第一位不是0，比如str="APAT"，则长度为4） 
*参考：
 1. [CSDN] PAT 1003. 我要通过！ 
	https://blog.csdn.net/ermua/article/details/79513355
 2. [简书] PAT-B 1003. 我要通过！(20)
	https://www.jianshu.com/p/59ea02ed0c6c
*****************************/ 

#include <iostream>

using namespace std;

int main(){
	int n, i;
	string str;
	bool result = true;
	int cntP = 0, cntT = 0, firstP, firstT, cnt_a, cnt_b, cnt_c;
	
	cin >> n;
	while(n--){
		cin >> str;
		
		//为每次判断初始化变量 
		cntP = cntT = 0;
		result = true;
		
		//检查是否符合条件：只含有P、A、T三种字母，并且只有一个P和T 
		for(i = 0; str[i]; i++){
			if(str[i] != 'P' && str[i] != 'A' && str[i] != 'T'){
				result = false;
				break;
			}
			if(str[i] == 'P'){
				cntP++;
				if(cntP > 1){
					result = false;
				}
			}
			if(str[i] == 'T'){
				cntT++;
				if(cntT > 1){
					result = false;
				}
			}
		}
		
		//若符合上述条件，再检查如下条件：P和T之间至少有一个A，且a、b、c符合a*b=c 
		if(result){
			cnt_a = firstP = str.find('P');
			firstT = str.find('T');
			cnt_b = firstT - firstP - 1;
			cnt_c = str.length() - firstT - 1;
			if(cnt_b == 0){
				result = false;
			}
			if(cnt_a * cnt_b != cnt_c){
				result = false;
			}
		}
		
		//输出结果 
		if(result){
			cout << "YES" << endl;
		}else{
			cout << "NO" << endl;
		}
		
	}
	
	return 0;
} 
