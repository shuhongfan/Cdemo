#include <stdio.h>
float average;
int main(){
    int i,num[100],n,s;
    printf("����ѧ��������");
    scanf("%d",&n);
    printf("����%d��ѧ���ĳɼ���\n",n);
    for(i=0;i<n;i++){
        scanf("%d",&num[i]);
    }
    s=sum(num,n);
    printf("�ܳɼ�=%d\n",s);
    printf("ƽ���ɼ�=%.2f\n",average);
}

sum(a,m)
int a[],m;
{
    int i,s=0;
    for(i=0;i<m;i++){
        s+=a[i];
    }
    average=(float)s/m;
    return s;
}