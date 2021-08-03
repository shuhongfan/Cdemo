#include <stdio.h>

int main(){
    char ch1,ch2;
    printf("ÇëÊäÈëÒ»¸öÐ¡Ð´×ÖÄ¸£º");
    ch1=getchar();
    ch2=ch1-32;
    ch1>='a'&&ch1<='z'? putchar(ch2) : printf("ÊäÈë´íÎó£¡");
}