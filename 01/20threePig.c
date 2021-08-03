//
// Created by shuhongfan on 2020/10/26.
//


#include <stdio.h>

int main() {
    int a,b,c;
    printf("请输入三只小猪体重:\n");
    scanf("%d%d%d",&a,&b,&c);
    if (a>b){
        if (a>c){
            printf("小猪a最重");
        } else{
            printf("小猪C最重");
        }
    } else{
        if (b>c){
            printf("小猪b最重");
        } else{
            printf("小猪C最重");
        }
    }
}
