#include <stdio.h>
int n=1;
int main(){
    int func();
    static int x=5;
    int y;
    y=n;
    printf("MAIN:x=%2d y=%2d n=%2d\n",x,y,n);
    func();
    printf("MAIN:x=%2d y=%2d n=%2d\n",x,y,n);
    func();
}
int func(){
    static int x=4;
    int y=10;
    x=x+2;
    n=n+10;
    y=y+n;
    printf("FUNC:x=%2d y=%2d n=%2d\n",x,y,n);
}