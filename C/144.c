#include <stdio.h>
#include <string.h>
int main(){
    void insert(char []);
    char str[100];
    gets(str);
    insert(str);
    
    return 0;
}
void insert(char str[]){
    int i;
    for(i=strlen(str);i>0;i--){
        str[i*2]=str[i];
        str[i*2-1]=' ';
    }
    puts(str);
}
// void insert(char str[]){
//     int i;
//     char s[100];
//     for(i=0;str[i]!='\0';i++){
//         s[2*i]=str[i];
//         s[2*i+1]=' ';
//     }
//     s[2*i]='\0';
//     puts(s);
// }