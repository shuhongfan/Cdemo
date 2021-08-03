//
// Created by shuhongfan on 2020/10/27.
//

#include <stdio.h>
#include <windows.h>

int main111(){
//    外层执行一次 内层循环一周
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 5; ++j) {
            printf("i=%d,j=%d\n",i,j);
        }
    }
}

//时钟
int main222(){
    for (int i = 0; i < 24; ++i) {
        for (int j = 0; j < 60; ++j) {
            for (int k = 0; k < 60; ++k) {
                system("cls");
                printf("%02d:%02d:%02d\n",i,j,k);
                Sleep(950);
            }
        }
    }
}

//九九乘法口诀
int main(){
//    外层控制行 内层控制列
    for (int i = 1; i <=9; ++i) {
        for (int j = 1; j <=i; ++j) {
            printf("%d * %d = %d\t",j,i,i*j);
        }
        printf("\n");
    }
}