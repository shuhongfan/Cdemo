//
// Created by shuhongfan on 2020/10/29.
//

#include <stdio.h>

int main11(){
    int arr[]={1,2,3,4,5,6,7,8,'a','b','c'};
//    ��������һ������ ������ֵ
//    arr=100;

//    ��������������Ԫ�ص�ַ
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

//    ����ָ����� ���������ָ���ƫ���� ����
//    ����ָ������ ����������int����
    int step=p-arr;
    printf("%d\n",step);
}

int main22(){
    int arr[]={1,2,3,4,5,6,7,8,9,10};
//    ָ������ָ��
    int* p=arr;
//    p[i]
//    *(p+i)
//    p�Ǳ��� arr�ǳ���
//    p��һ��ָ�� 8���ֽڴ�С
//    arr��һ������ 40�ֽڴ�С
    printf("ָ�����ʹ�С��%d\n",sizeof(p));
    printf("�����С��%d\n",sizeof(arr));
}

//������Ϊ�����������˻�Ϊָ�� ��ʧ����ľ���
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