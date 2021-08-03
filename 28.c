#include "stdio.h"
#include "math.h"
int main(){
    int num,gen;
    scanf("%d",&num);
    while (num>=1000)
    {
        printf("大于等于1000请重新输入");
        scanf("%d",&num);
    }
    
    // if(num>=1000){
    //     printf("大于等于1000请重新输入");
    //     scanf("%d",&num);
    // }
    gen=sqrt(num);
    printf("%d",gen);
}