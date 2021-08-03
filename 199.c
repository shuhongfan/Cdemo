#include <stdio.h>

int main(){
    void scan(int *str);
    void max_min(int *str);
    void prin(int *str);
    int str[10];
    scan(str);
    max_min(str);
    prin(str);
    return 0;
}
void scan(int *str){
    int i;
    for(i=0;i<10;i++)
        scanf("%d",&str[i]);
}
void prin(int *str){
    int *i;
    for(i=str;i<str+10;i++)
        printf("%d ",*i);
}
void max_min(int *str){
    int *max,*min,*p,temp;
    max=min=str;
    for(p=str+1;p<str+10;p++)
        if(*p<*min) min=p;
    temp=*min;
    *min=str[0];
    str[0]=temp;
    for(p=str+1;p<str+10;p++)
        if(*p>*max) max=p;
    temp=*max;
    *max=str[9];
    str[9]=temp;
}