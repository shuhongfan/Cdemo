#include <stdio.h>

int main(){
    int upper=0,lower=0,digit=0,space=0,other=0,i=0;
    char *p,s[20];
    while((s[i]=getchar())!='\n') i++;
    p=&s[0];
    while(*p!='\n'){
        if(*p>='A'&&*p<='Z') upper++;
        else if(*p>='a'&&*p<='z') lower++;
        else if(*p>='0'&&*p<='9') digit++;
        else if(*p==' ') space++;
        else other++;
        p++;
    }
    printf("upper=%d\n",upper);
    printf("lower=%d\n",lower);
    printf("digit=%d\n",digit);
    printf("space=%d\n",space);
    printf("other=%d\n",other);
}

// Today is 2008/8/8