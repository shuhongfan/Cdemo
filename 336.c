//
// Created by shuhongfan on 2021/6/7.
//

#include <stdio.h>

int main()
{ char ch[7]={"65ab21"};
    int i,s=0;
    for(i=0;ch[i]>='0' && ch[i]<='9';i+=2){
        s=10*s+ch[i]-'0';
        printf("i=%d\ts=%d\n",i,s);
    }
    printf("%d\n",s);
}