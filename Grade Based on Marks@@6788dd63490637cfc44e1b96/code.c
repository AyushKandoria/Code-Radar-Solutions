#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    if(n>=100&&n<=90){
        printf("A");
    }else if(n>=90&&n<=80){
        printf("B");
    }
    return 0;
}