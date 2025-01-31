#include<stdio.h>
int main(){
    int a,b,c;
    float avr;
    scanf("%d%d%d",&a,&b,&c);
     avr=a+b+c;
    printf("Average: %.2d",avr/3);
    return 0;
}