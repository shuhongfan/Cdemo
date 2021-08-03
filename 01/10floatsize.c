//
// Created by shuhongfan on 2020/10/26.
//

#include <stdio.h>

int main(){
    float a=3.14;
    double b=3.14;
    printf("%f\n",a);
    printf("%lf\n",b);

//    浮点型数据 存储在内存中的格式分为
    printf("%d\n",sizeof(float ));
    printf("%d\n",sizeof(double ));


//    int c=10;
//    float d=3.14;
//    printf('%p\n',&c);
//    printf('%p\n',&d);


    float e=12345.6;
    printf("%e\n",e);
}