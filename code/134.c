#include <stdio.h>

int main(){
    int score[4][3]={{81,76,90},{94,90,85},{45,32,25},{79,83,70}};
    int i,j;
    printf("%12s%12s%12s\n","语文成绩","数学成绩","C语言成绩");
    for(i=0;i<4;i++){
        for(j=0;j<3;j++){
            printf("%12d",score[i][j]);
        }
        printf("\n");
    }
}