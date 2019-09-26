#include<iostream>
#include<algorithm>
const int maxn=100010;
using namespace std;

struct info{
    int adress,data,next;
    int order;
    info(){//初始化
        order=maxn;
    }
};

bool cmp(info a,info b){
    return a.order < b.order;
}

int main(){
    info a[maxn];
    int start,n,k;
    scanf("%d %d %d",&start,&n,&k);
    for(int i=0;i<n;i++){//持续读取结点
        int x;
        scanf("%d",&x);
        scanf("%d %d",&a[x].data,&a[x].next);
        a[x].adress=x;
    }
    int count=0;//统计有效结点的个数
    int temp=start;
    while(temp!=-1){
        a[temp].order=++count;
        temp=a[temp].next;
    }
    sort(a,a+maxn,cmp);
    for(int i=1;i<=count/k;i++){//把结点分成count/k组，每组逆序输出结点内容
        for(int j=(i*k-1);j>(i-1)*k;j--){//因为数组下是从标是从0开始的，所以记得每个下标都要减去1
            printf("%05d %d %05d\n",a[j].adress,a[j].data,a[j-1].adress);
        }
        if(i*k==count) printf("%05d %d -1\n",a[(i-1)*k].adress,a[(i-1)*k].data);
        else{
            //如果它后面是和它一样的循环呢
            if(i<count/k)
                printf("%05d %d %05d\n",a[(i-1)*k].adress,a[(i-1)*k].data,a[(i+1)*k-1].adress);
            else 
            //如果它后面不是循环呢，是剩下的结点
                printf("%05d %d %05d\n",a[(i-1)*k].adress,a[(i-1)*k].data,a[k*i].adress);
        }
    }
    //如果后面还有一串剩下的，按照顺序输出即可！
    if(count/k*k<count){
        for(int i=count/k*k;i<count;i++){
            printf("%d %d %d\n",a[i].adress,a[i].data,a[i].next);
        }
    }
    return 0;
}

