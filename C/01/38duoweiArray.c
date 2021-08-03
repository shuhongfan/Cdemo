//
// Created by shuhongfan on 2020/10/27.
//

#include <stdio.h>

int main(){
    int arr[2][3][4]={
            {
                    {1,2,3,4},
                    {2,3,4,5},
                    {3,4,5,6}
            },{
                    {4,5,6,7},
                    {5,6,7,8},
                    {6,7,8,9}
            }
    };

    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 3; ++j) {
            for (int k = 0; k < 4; ++k) {
                printf("%d\t",arr[i][j][k]);
            }
            printf("\n");
        }
    }

    printf("三维数组的大小：%d\n",sizeof(arr));
    printf("三维数组一层大小：%d\n",sizeof(arr[0]));
    printf("三维数组一行大小：%d\n",sizeof(arr[0][0]));
    printf("三维数组元素大小：%d\n",sizeof(arr[0][0][0]));

    printf("层：%d\n",sizeof(arr)/sizeof(arr[0]));
    printf("行：%d\n",sizeof(arr[0])/sizeof(arr[0][0]));
    printf("列：%d\n",sizeof(arr[0][0])/sizeof(arr[0][0][0]));
}