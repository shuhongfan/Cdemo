//
// Created by shuhongfan on 2020/10/27.
//

#include <stdio.h>

int main(){
    int arr[2][3]={
        {1,2,3},
        {4,5,6}
    };

    arr[1][2]=20;
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 3; ++j) {
            printf("%d----%p\n",arr[i][j],arr[i][j]);
        }
    }
    printf("二维数组的大小：%d\n",sizeof(arr));
    printf("二维数组一行的大小：%d\n",sizeof(arr[0]));
    printf("二维数组元素的大小：%d\n",sizeof(arr[0][0]));

    printf("二维数组行数：%d\n",sizeof(arr)/sizeof(arr[0]));
    printf("二维数组的列数：%d\n",sizeof(arr[0])/sizeof(arr[0][0]));

//    二维数组的首地址
    printf("%p\n",arr);
    printf("%p\n",arr[0]);
    printf("%p\n",arr[1]);
    printf("%p\n",&arr[0][0]);

//    二维数组初始化过程
    int arr1[][3]={1,2,3,4,5,6};
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 3; ++j) {
            printf("%d\n",arr1[i][j]);
        }
    }
}