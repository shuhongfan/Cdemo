#include <stdio.h>

int main(){
    void copy_string(char *from,char *to);
    char *a="I am a teacher.";
    char b[]="You are a student.";
    char *p=b;
    printf("string a=%s\nstring b=%s\n",a,b);
    copy_string(a,p);
    printf("string a=%s\nstring b=%s\n",a,b);
    return 0;
}

// void copy_string(char *from,char *to){
//     while (*from!='\0')
//     {
//         *to=*from;
//         to++;
//         from++;
//     }
//     *to='\0';
// }

// void copy_string(char *from,char *to){
//     while((*to=*from)!='\0'){
//         to++;from++;
//     }
// }

// void copy_string(char *from,char *to){
//     while((*to++=*from++)!='\0');
// }

// void copy_string(char *from,char *to){
//     while(*from!='\0'){
//         *to++=*from++;
//     }
//     *to='\0';
// }

// void copy_string(char *from,char *to){
//     while(*from)
//         *to++=*from++;
//     *to='\0';
// }

void copy_string(char *from,char *to){
    while(*to++=*from++);
}