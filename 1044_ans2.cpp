#include <iostream>
#include <string.h>
#include <math.h>
#include <string>
#include <cstdio>
using namespace std;


int main()
{
    int N;
    scanf("%d\n", &N);
    // cin >> N;
    string str;
    string lowName[13] = {"tret", "jan", "feb", "mar", "apr", "may", 
                       "jun", "jly", "aug", "sep", "oct", "nov", "dec"};
    string highName[13] = {"", "tam", "hel", "maa", "huh", "tou", "kes", 
                        "hei", "elo", "syy", "lok", "mer", "jou"};
    while (N--)
    {
        getline(cin, str);
        int len = str.length();
        int sum = 0;
        if (str[0] >= '0' && str[0] <= '9')
        {
            for (int i = len-1; i >= 0; i--)
            {
                sum += (str[i]-'0') * pow(10, len-i-1);
            }
            int high = sum / 13;
            int low = sum % 13;
            if (high == 0)
            {
                cout << lowName[low] << endl;
            }
            else
            {
                cout << highName[high];
                if (low != 0)
                {
                    cout << " " << lowName[low];
                }
                cout << endl;               
            }
        }
        else
        {
            char str1[4] = {'\0'} , str2[4] = {'\0'};
            int idx1 = 0, idx2 = 0;
            int k = 0, j = 0;
            for (; k < len && str[k] != ' ';)
            {
                str1[idx1++] = str[k++];
            }
            for (k = k+1; k < len;)
            {
                str2[idx2++] = str[k++];
            }
            for (int i = 0; i < 13; i++)
            {   
                if (lowName[i] == str1)
                {
                    sum = i;
                    break;
                }
                else
                {
                    if (highName[i] == str1)
                    {
                        sum += i * 13;
                        for (j = 0; j < 13; j++)
                        {
                            if (lowName[j] == str2)
                            {
                                sum += j;
                                break;
                            }
                        }
                    }   

                }
            }
            cout << sum << endl;
            sum = 0;
        }
    }
}

