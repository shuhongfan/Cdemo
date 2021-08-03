#include <stdio.h>

int plus(int x,int y){
    return x+y;
}
int main(){
    int a=10,b=20,c1,c2;
    int (*func)();
    func=plus;
    c1=(*func)(a,b);
    c2=plus(a,b);
    printf("%d+%d=%d\n",a,b,c1);
    printf("%d+%d=%d\n",a,b,c2);
}