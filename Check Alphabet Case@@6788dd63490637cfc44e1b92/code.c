#include<stdio.h>
int main(){
    char a;
    scanf("%c",&a);
    if(a=='A'){
        printf("Uppercase");
    }else if(a=='a'){
        printf("Lowercase");
    // }else{
    //     printf("Not a alphabet");
    // }
    return 0;
}