#include <stdio.h>

#define JH(x,y) t=x;x=y;y=t
int main(){
    int x,y,z,t;
    scanf("%d,%d,%d",&x,&y,&z);
    if(x<y) JH(x,y);
    if(x<z) JH(x,z);
    if(y<z) JH(y,z);
    printf("%d,%d,%d",x,y,z);
}