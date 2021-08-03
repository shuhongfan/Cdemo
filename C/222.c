#include <stdio.h>

int main(){
    struct Student{
        long int num;
        char name[20];
        char sex;
        char addr[20];
    } a={10101,"Li Lin",'M',"123 Beijing Road"};
    struct Student b={.name="Zhang Fang"};
    a.num=111111;
    printf("NO.%ld\name:%s\nsex=%c\naddress:%s\n",a.num,a.name,a.sex,a.addr);
    printf("NO.%ld\name:%s\nsex=%c\naddress:%s\n",b.num,b.name,b.sex,b.addr);
    return 0;
}