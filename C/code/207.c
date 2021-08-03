#include <stdio.h>
#define A 3
#define B 5
#define PRINT printf("\n")
#define PRINT1 printf("%d",A*B);PRINT
#define PRINT2(x,y) printf("%d",x*y)
int main(){
    PRINT1;
    PRINT2(A+1,B+1);
}