#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    if(n>=100&&<=90){
        printf("A");
    }else if(n>=90&&<=80){
        printf("B");
    }else if(n>=80&&<=70){
        printf("C");
    }else if(n>=60&&<=70){
        printf("D");
    }else{
        printf("F");
    }
    return 0;
}