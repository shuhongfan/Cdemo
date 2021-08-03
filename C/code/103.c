#include <stdio.h>

int main(){
    int x,y,z;
    scanf("%d,%d",&x,&y);
    while(x!=0&&y!=0){
        z=x+y;
        printf("z=%d\n",z);
        scanf("%d,%d",&x,&y);
    }
}