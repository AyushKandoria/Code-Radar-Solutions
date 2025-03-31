#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int x=0;
    for(int i=0;i<n;i++){
        if(arr[i]>arr[i]+1){
            x=1;
            break;
        }
    }
    if(x==0) printf("Sorted");
    else printf("Not Sorted");
}