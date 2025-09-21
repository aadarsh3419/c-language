#include<stdio.h>
int main(){
    int n,i,j;
    printf("enter a number: ");
    scanf("%d",&n);
    for (i=0;i<=n;i++){
        for (j=0;j<=n;j++){
            if ( i==n/2 || j==n/2 ){
                printf("*");
            }
            else if (i==0 && j<=n/2){
                printf("*");
            }
            else if ( i == n && j>=n/2){
                printf("*");
            }
            else if ( i<=n/2 && j == n){
                printf("*");

            }
            else if ( i >=n/2 && j == 0){
                printf("*");
            }
            else  (printf(" "));
            
        }
    printf("\n");
    }
    return 0;
}