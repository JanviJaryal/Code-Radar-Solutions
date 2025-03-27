#include<stdio.h>
 int main(){
     int N;
     printf("enter the number of rows:");
     scanf("%d",&N);
     int a = N;
     for(int i=1;i<=N;i++){
        for(int j=1;j<=a;j++){
            printf("*");
        }
        printf("\n");
        a--;
     }
     return 0;}