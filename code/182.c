#include <stdio.h>

int main(){
    extern b;
    int a=1,c;
    func();
    c=a+b;
    printf("C=%d",c);
}
int b=2;
func(){
    b++;
}