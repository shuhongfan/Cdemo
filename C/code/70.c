#include <stdio.h>

int main(){
    char *a="hello,world";
    printf(":%10s:\n",a);
    printf(":%-10s:\n",a);
    printf(":%20s:\n",a);
    printf(":%-20s:\n",a);
    printf(":%20.10s:\n",a);
    printf(":%-20.10s:\n",a);
    printf(":%.10s:\n",a);
    printf("%s\n","Very Good");
}