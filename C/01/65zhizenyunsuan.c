//
// Created by shuhongfan on 2020/10/29.
//

#include <stdio.h>

void strcpy(char* dest,char* ch){
    int i=0;
    while (ch[i]!='\0'){
        dest[i]=ch[i];
        i++;
    }
    dest[i]=0;
}

void strcpy2(char* dest,char* ch){
    int i=0;
    while (*(ch+1)){
        *(dest+i)=*(ch+i);
        i++;
    }
    *(dest+i)=0;
}
void strcpy3(char* dest,char* ch){
    while (*ch){
        *dest=*ch;
        dest++;
        ch++;
    }
    *dest=0;
}
void strcpy4(char* dest,char* ch){
    while (*dest++=*ch++);
}
int main11(){
    char ch[]="hello world";
    char dest[100];
    strcpy4(dest,ch);
    printf("%s\n",dest);
}


int main22(){
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int* p=arr;
    p=&arr[3];
    printf("%p\n",p);
    p--;
    p--;
    p--;
    int step=p-arr;
    printf("%d\n",step);
    printf("%p\n",p);
    printf("%p\n",arr);
}

int main(){
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int* p=arr;
    p=100;
    int step=arr-p;
    printf("%d\n",step);
}