#include <stdio.h>

int main(){
    void sort(char *p,int m);
    int i,n;
    char *p,num[20];
    scanf("%d",&n);
    for(i=0;i<n;i++) scanf("%d",&num[i]);
    p=&num[0];
    sort(p,n);
    for(i=0;i<n;i++) printf("%d",num[i]);
}
void sort(char *p,int m){
    int i;
    char temp,*p1,*p2;
    for(i=0;i<m/2;i++){
        p1=p+i;
        p2=p+(m-i-1);
        temp=*p1;
        *p1=*p2;
        *p2=temp;
    }
}