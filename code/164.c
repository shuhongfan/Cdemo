#include <stdio.h>

int main(){
    int a[3],i,s;
    for(i=0;i<3;i++){
        scanf("%d",&a[i]);
    }
    s=sum(a[0],a[1],a[2]);
    printf("s=%d",s);
}

sum(x,y,z)
int x,y,z;
{
    return x+y+z;
}