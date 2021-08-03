//
// Created by shuhongfan on 2020/10/25.
//

#include <stdio.h>

#define PI 3.14
int main() {
//    const float PI=3.1415926;
    auto float r=3.4;
    float s=PI*r*r;
    float l=2*PI*r;
    printf("圆的面积：%.2f\n",s);
    printf("圆的周长：%.2f\n",l);

//    标识符
//    1.不能使用系统关键字
//    2.允许使用字母数字下划线
//    3.不允许数字开头
//    4.标识符区分大小写
//    5.见名知意
    return 0;
}