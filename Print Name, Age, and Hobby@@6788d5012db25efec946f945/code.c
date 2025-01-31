#include<stdio.h>
int main(){
    char name[100],hobby[200];
    int age;
    scanf("%s%d%s",&name,&age,&hobby);
    printf("Name: %s\n",name);
    printf("Age: %d\n",age);
    printf("Hobby: %s\n",hobby);
    return 0;
}