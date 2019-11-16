#include <iostream>
using namespace std;

int main() {
	int m, n, s, i, j, p = 0;
	cin >> m >> n >> s;
	string str[m];
	string name;

	if(s > m) {
		cout << "Keep going..."; 
	} else {
		for(i = 1; i <= m; i++) {
			cin >> name;
			if(i == s) {
				for(j = 0; j < p; j++) {
					if(str[j] == name) {
						break;
					}
				}
				if(j >= p) {
					cout << name << endl;
					str[p++] = name;
				} else {
					//有重复
					s = i + 1;
					continue;
				}
			} else if(i > s) {
				if((i - s) % n == 0) {
					for(j = 0; j < p; j++) {
						if(str[j] == name) {
							break;
						}
					}
					if(j >= p) {
						cout << name << endl;
						str[p++] = name;
					} else {
						//有重复
						s = i + 1;
						continue;
					}
				}
			}
		}
	}

	return 0;
}
