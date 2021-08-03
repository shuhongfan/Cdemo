#include <stdio.h>
#define SIZE 10

struct Student_type{
    char name[10];
    int num;
    int age;
    char addr[15];
} stud[SIZE];

void save(){
    FILE *fp;
    int i;
    if((fp=fopen("a.txt","wb"))==NULL){
        printf("error");
        return;
    }
    for(i=0;i<SIZE;i++){
        if(fwrite(&stud[i],sizeof(struct Student_type),1,fp)!=1){
            printf("file write error");
        }
    }
    fclose(fp);
}

int main(){
    int i;
    for(i=0;i<SIZE;i++)
        scanf("%s%d%d%s",stud[i].name,&stud[i].num,&stud[i].age,stud[i].addr);
    save();
    return 0;
}
// zhang 1001 19 room_101
// sun 1002 20 room_102
// tan 1003 21 room_103
// ling 1004 21 room_104
// li 1006 22 room_105
// wang 1007 22 room_106
// zhen 1008 16 room_107
// fu 1010 18 room_108
// qin 1012 19 room_109
// liu 1014 21 room_110