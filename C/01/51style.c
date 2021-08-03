//
// Created by shuhongfan on 2020/10/28.
//

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

//int fun01(){
//    return rand() % 10;
//}
//
//int main01(){
//    srand((unsigned int)time(NULL));
//    fun01();
//}

void BubbleSort(int arr[],int len){
    for (int i = 0; i < len - 1; ++i) {
        for (int j = 0; j < len - 1 -i; ++j) {
            if (arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j + 1];
                arr[j+1]=temp;
            }
        }
    }
}

int main(){
    int arr[]={9,1,7,4,2,10,3,8,6,5};
    BubbleSort(arr,sizeof(arr)/sizeof(arr[0]));
    for (int i = 0; i < 10; ++i) {
        printf("%d\n",arr[i]);
    }
}

//void类型不可以直接定义数据
//void类型可以作为函数的返回值类型 表示没有返回值
void fun02(){}

//无参无返函数
void main1(void){}