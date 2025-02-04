#include<stdio.h>
int main(){
    char a;
    scanf("%c",&a);
    if(a=='A'to'Z'){
        printf("Uppercase");
    }else if(a=='a'to'z'){
        printf("Lowercase");
     }else{
         printf("Not a alphabet");
     }
    return 0;
}