#include<stdio.h>
int main(){
    char q,w,u,a,e,i,o,@,!,#,$,%,&;
    scanf("%c",&w);
    q=a,e,i,o,u;
    p=@,!,#,$,%,&;
    if(w==q){
        printf("Vowel");
    }else if(w==p) {
        printf("Special Character");
    }else{
        printf("Consonant");
    }
    return 0;
}