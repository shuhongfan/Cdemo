#include "stdio.h"
int main(){
    char c;
    int letters=0,space=0,num=0,other=0;
    while((c=getchar())!='\n'){
        if(c>='0'&&c<='9') num++;
        else if(c>='A'&&c<='Z'||c>='a'&&c<='z') letters++;
        else if(c==' ') space++;
        else other++;
    }
    printf("letters=%d,space=%d,num=%d,other=%d",letters,space,num,other);
}