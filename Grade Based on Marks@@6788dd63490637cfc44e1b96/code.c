#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    if(n>=100){
        printf("A");
    }else if(n>=90){
        printf("B");
    }else if(n>=80){
        printf("C");
    }else if(n>=60){
        printf("D");
    }else{
        printf("F");
    }
    return 0;
}