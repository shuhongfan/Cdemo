//
// Created by shuhongfan on 2020/10/26.
//

#include <stdio.h>

int main(){
    char ch = 'A';
    printf("%c\n", ch);
    printf("%d\n", ch);
    printf("×Ö·ûÐÍ´óÐ¡£º%d\n", sizeof(ch));

    char ch1='a';
    char ch2="A";
    printf("%d\n",ch1-ch2);

    char scanfch;
    scanf("%c",&scanfch);
    printf("%c\n",scanfch-32);
    printf("%c\n",98);

    printf("\"Äã³òÉ¶\"\n");
    printf("%%d\n");
}