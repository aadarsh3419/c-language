#include<stdio.h>
int main(){
    int n,i,j;
    printf("enter a number only odd: ");
    scanf("%d",&n);
    for (i=0;i<n+1;i++){
        for(j=-2;j<=n+1;j++){
            if(i<=n/2 && (j==n/2-i||j==n/2+i)||
                (i>=n/2 && (j==n/2-i||j==n/2+i))||
                    (i==n/2 && j>=0 && j<=n-1)){
                    printf("*");
                }
            else(printf(" "));
            
        }

    printf("\n");
    }
    return 0;
}