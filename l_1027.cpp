#include <iostream>
using namespace std;
int main(){
	int N;
    char c;
    cin>>N>>c;
    int i,high,r,d,k;
    int sum=0;
    for(i=1;sum<=N;i++)
    {
        sum=2*i*i-1;
    }
    high=i-2;
    sum=2*high*high-1;
    r=N-sum;
    for(d=high;d>0;d--)
    {
        if(d<high)
            {
                for(k=high-d;k>0;k--)
                {
                        cout<<" ";
                }
            }
            for(i=2*d-1;i>0;i--)
            {
                cout<<c;
            }
            cout<<endl;
    }
    for(d=2;d<=high;d++)
    {
            if(d<high)
            {
                for(k=high-d;k>0;k--)
                {
                        cout<<" "; 
                }
            }
        for(i=2*d-1;i>0;i--)
        {
            cout<<c;
        }
        cout<<endl;
    }
    cout<<r<<endl;

return 0;
}

