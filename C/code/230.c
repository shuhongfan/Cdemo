#include <stdio.h>

int main(){
    char *a[]={"for","switch","if","while"};
    char *p;
    for(p=a;p<a+1;p++){
        printf("%s\n",*p);
    }
}