#include <stdio.h>

int main(){
    fun();
    fun();
    fun();
}

fun()
{
    static int x=1;
    x++;
    printf("x=%d\n",x);
}