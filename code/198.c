#include <stdio.h>

FILE *fp;
int a[]={1,10,50,100,500,1000,1500,23456};
int main(){
    int i,b[1];
    fp=fopen("AAA.TXT","wb");
    for(i=0;i<8;i++) printf("%d",a[i]);
    fclose(fp);

    fp=fopen("AAA.TXT","rb");
    while(feof(fp)==0){
        fscanf(fp,"%d",&b[0]);
        printf("%d",b[0]);
    }
    fclose(fp);
}