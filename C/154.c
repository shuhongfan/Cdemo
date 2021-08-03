#include "stdio.h"
#include "string.h"
#define N 10

int main(){
    void input(int [],char name[][8]);
    void sort(int [],char name[][8]);
    void search(int,int [],char [][8]);
    int num[N],number,flag=1,c;
    char name[N][8];
    input(num,name);
    sort(num,name);
    while(flag==1){
        printf("\ninput number to look for:");
        scanf("%d",&number);
        search(number,num,name);
        printf("continue to not(Y/N)?");
        c=getchar();
        if(c=='N'||c=='n') flag=0;
    }
    return 0;
}
void input(int num[],char name[N][8]){
    int i;
    for(i=0;i<N;i++){
        printf("input No.:");
        scanf("%d",&num[i]);
        printf("input name:");
        gets(name[i]);
    }
}
void sort(int num[],char name[N][8]){
    int i,j,min,templ;
    char temp2[8];
    for(i=0;i<N-1;i++){
        min=i;
        for(j=i;j<N;j++){
            if(num[min]>num[j]) min=j;
        }
        templ=num[i];
        strcpy(temp2,name[i]);
        num[i]=num[min];
        strcpy(name[i],name[min]);
    }
}