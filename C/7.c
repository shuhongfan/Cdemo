#include <stdio.h>
int max(int num[10]){
    int max=num[0];
    for(int i=1;i<10;i++)
        if(num[i]>max) max=num[i];
    return max;
}
int main(){
    int num[10],i,m;
    for(i=0;i<10;i++)
        scanf("%d",&num[i]);
    m=max(num);
    printf("%d",m);
}