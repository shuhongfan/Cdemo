//
// Created by shuhongfan on 2020/10/27.
//

#include <stdio.h>

int main(){
//    ��������һ����ַ����
    int arr[10]={9,4,2,1,8,5,3,6,10,7};
    printf("%d\n",arr[0]);
    printf("%d\n",arr[1]);

    arr[3]=arr[5];

    for (int i = 0; i < 10; ++i) {
        printf("%d\n",arr[i]);
    }

//    �±�Ϊ0�Ĵ洢��ʽ�ʹ�С
    for (int j = 0; j < 10; ++j) {
        printf("%p\n",&arr[j]);
    }

    printf("%p---%p\n",arr,&arr);

    printf("�������ڴ���ռ�Ĵ�С��%d\n",sizeof(arr));
    printf("����Ԫ�ش�С:%d\n",sizeof(arr[0]));
    printf("����Ԫ�ظ�����%d\n",sizeof(arr)/sizeof(arr[0]));
}