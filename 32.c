#include "stdio.h"

int main(){
    int num,len,ge,shi,bai,qian,wan;
    scanf("%d",&num);
    while(num>99999||num<0){
        printf("\n error\n");
        scanf("%d",&num);
    }
    if(num>9999) len=5;
    else if(num>999) len=4;
    else if(num>99) len=3;
    else if(num>9) len=2;
    else len=1;
    ge=num%10;
    shi=num/10%10;
    bai=num/100%10;
    qian=num/1000%10;
    wan=num/10000%10;
    switch(len){
        case 5:printf("len=%d***%d,%d,%d,%d,%d\n",len,wan,qian,bai,shi,ge);printf("%d%d%d%d%d",ge,shi,bai,qian,wan);break;
        case 4:printf("len=%d***%d,%d,%d,%d\n",len,qian,bai,shi,ge);printf("%d%d%d%d",ge,shi,bai,qian);break;
        case 3:printf("len=%d***%d,%d,%d\n",len,bai,shi,ge);printf("%d%d%d",ge,shi,bai);break;
        case 2:printf("len=%d***%d,%d\n",len,shi,ge);printf("%d%d",ge,shi);break;
        case 1:printf("len=%d***%d\n",len,ge);printf("%d",ge);break;
    }
    return 0;
}