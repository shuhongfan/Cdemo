#include <stdio.h>
#define NUMB 20

int main(){
    int i,num;
    char name[10];
    float score;
    FILE *fp;
    if(!(fp=fopen("AAA.TXT","wb"))){
        printf("cannot open file\n");
    }
    for(i=0;i<NUMB;i++){
        scanf("%d%10s%f",&num,name,&score);
        fwrite(&num,2,1,fp);
        fwrite(name,10,1,fp);
        fwrite(&score,sizeof(float),1,fp);
    }
    fclose(fp);
}