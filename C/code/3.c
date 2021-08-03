#include <stdio.h>
#include <string.h>

int main() {
    // char ch1='A'+'6'-'3';
    // printf("%c\n",ch1);

    // printf("%d\n",sizeof(45645.545));

    // int a,b,c;
    // scanf("a=%db=%dc=%d",&a,&b,&c);
    // printf("a=%db=%dc=%d",a,b,c);

    // int x,i,j,k;
    // x=(i=4,j=16,k=32);
    // printf("%d",x);

    // int i,j;
    // for(i=0;i<5;i++){
    //     for(j=1;j<10;j++){
    //         if(j==5) break;
    //         if(i<2) continue;
    //         if(i>2) break;
    //         printf("j=%d",j);
    //     }
    //     printf("i=%d\n",i);
    // }

    // char s[5    ]={"abc"};
    // char s[5]="abcdef";
    // printf("%s",s);

    // int a[][3]={1,2,3,4,5,6,7,8};
    // printf("%d",sizeof(a));

    // int a[10],*p1,*p2;
    // p1=a;
    // p2=&a[5];
    // printf("%d",p2-p1);

    char *s1="12345",*s2="1234";
    printf("",strcpy(s1,s2));
    printf("%d\n",strlen(strcpy(s1,s2)));
}