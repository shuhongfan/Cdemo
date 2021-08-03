//
// Created by shuhongfan on 2020/10/29.
//

#include <stdio.h>

int main11(){
    int arr[]={1,2,3,4,5,6,7,8,'a','b','c'};
//    数组名是一个常量 不允许赋值
//    arr=100;

//    数组名是数组首元素地址
    int* p;
    p=arr;
    printf("%p\n",p);
    printf("%p\n",arr);

    *p=123;
//    p=p+1;
//    printf("%p\n",arr);
//    printf("%p\n",p);

    for (int i = 0; i < 10; ++i) {
//        printf("%d\n",arr[i]);
//        printf("%d\n",p[i]);
//        printf("%d\n",*(p+i));
//        printf("%d\n",*p);
//        p++;
        printf("%d\n",*p++);
    }
    printf("%p\n",p);
    printf("%p\n",arr);

//    两个指针相减 结果是两个指针的偏移量 步长
//    所有指针类型 相减结果都是int类型
    int step=p-arr;
    printf("%d\n",step);
}

int main22(){
    int arr[]={1,2,3,4,5,6,7,8,9,10};
//    指向数组指针
    int* p=arr;
//    p[i]
//    *(p+i)
//    p是变量 arr是常量
//    p是一个指针 8个字节大小
//    arr是一个数组 40字节大小
    printf("指针类型大小：%d\n",sizeof(p));
    printf("数组大小：%d\n",sizeof(arr));
}

//数组作为函数参数会退化为指针 丢失数组的精度
void BubbleSort(int arr[],int len){
//    int len=sizeof(arr)/sizeof(arr[0]);
//    printf("%d\n",len);
    for (int i = 0; i < len-1; ++i) {
        for (int j = 0; j < len-1-i; ++j) {
//            if (arr[j]>arr[j+1]){
//                int temp=arr[j];
//                arr[j]=arr[j+1];
//                arr[j+1]=temp;
//            }
            if (*(arr+j)>*(arr+j+1)){
                int temp=*(arr+j);
                *(arr+j)=*(arr+j+1);
                *(arr+j+1)=temp;
            }
        }
    }
}
int main(){
    int arr[]={9,1,5,6,3,8,10,2,7,4};
    BubbleSort(arr,10);
    for (int i = 0; i < 10; ++i) {
        printf("%d\n",arr[i]);
    }
}