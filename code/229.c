#include <stdio.h>

int main(){
    char *s="12134211";
    int v[4]={0,0,0,0},k,i;
    for(k=0;s[k];k++){
        switch(s[k]){
            case '1':i=0;
            case '2':i=1;
            case '3':i=2;
            case '4':i=3;
            // default: i=2;
        }
        v[i]++;
    }
    for(k=0;k<4;k++){
        printf("%d",v[k]);
    }
}