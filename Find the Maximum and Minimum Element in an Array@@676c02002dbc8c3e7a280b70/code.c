// Online C compiler to run C program online
#include <stdio.h>

int main() {
   int n;
   scanf("%d",&n);
   int arr[n];
   for(int i=0;i<n;i++){
    scanf("%d",&arr[n]);
   }
   int max=arr[0];
   for(int i=0;i<n;i++){
       if(arr[i]>max){
            max=arr[i];
        }int min=1000000;
        for(int j=0;j<n;j++){
            if(arr[j]<min){
                min=arr[j];

            }
        }
   }
   printf("%d ",min);
   printf("%d",max);

    return 0;
}