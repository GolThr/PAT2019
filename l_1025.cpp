#include<iostream>
#include<algorithm>
const int maxn=100010;
using namespace std;

struct info{
    int adress,data,next;
    int order;
    info(){//��ʼ��
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
    for(int i=0;i<n;i++){//������ȡ���
        int x;
        scanf("%d",&x);
        scanf("%d %d",&a[x].data,&a[x].next);
        a[x].adress=x;
    }
    int count=0;//ͳ����Ч���ĸ���
    int temp=start;
    while(temp!=-1){
        a[temp].order=++count;
        temp=a[temp].next;
    }
    sort(a,a+maxn,cmp);
    for(int i=1;i<=count/k;i++){//�ѽ��ֳ�count/k�飬ÿ����������������
        for(int j=(i*k-1);j>(i-1)*k;j--){//��Ϊ�������Ǵӱ��Ǵ�0��ʼ�ģ����Լǵ�ÿ���±궼Ҫ��ȥ1
            printf("%05d %d %05d\n",a[j].adress,a[j].data,a[j-1].adress);
        }
        if(i*k==count) printf("%05d %d -1\n",a[(i-1)*k].adress,a[(i-1)*k].data);
        else{
            //����������Ǻ���һ����ѭ����
            if(i<count/k)
                printf("%05d %d %05d\n",a[(i-1)*k].adress,a[(i-1)*k].data,a[(i+1)*k-1].adress);
            else 
            //��������治��ѭ���أ���ʣ�µĽ��
                printf("%05d %d %05d\n",a[(i-1)*k].adress,a[(i-1)*k].data,a[k*i].adress);
        }
    }
    //������滹��һ��ʣ�µģ�����˳��������ɣ�
    if(count/k*k<count){
        for(int i=count/k*k;i<count;i++){
            printf("%d %d %d\n",a[i].adress,a[i].data,a[i].next);
        }
    }
    return 0;
}

