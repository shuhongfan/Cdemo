#include <stdio.h>
int main(){
    int a,b;
    float x,y;
    char c1,c2;
    scanf("a=%d b=%d",&a,&b);
    scanf("%f%e",&x,&y);
    scanf("%c%c",&c1,&c2);
    printf("a=%d\n",a);
    printf("b=%d\n",b);
    printf("x=%f\n",x);
    printf("y=%f\n",y);
    printf("c1=%c\n",c1);
    printf("c2=%c\n",c2);
    return 0;
}